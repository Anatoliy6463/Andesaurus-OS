#include <stdio.h>
#include <string.h>
#include "games.h"
#include <unistd.h>
#include "keyfrases.h"
#include "apps.h"
#include "user-keyfrases.h"
#include <time.h>
#include <stdlib.h>
#include "cubensquare.h"
int main()
{
    char in[1025];
    time_t t;
    while(1)
    {
        scanf("%1024[^\n]%*c", in);
        if (strcmp(in, "ugadaika") == 0)
        {
            int a = 0;
            puts("Выберите сложность: 1, 2, 3, 4, 5, 6 или введите 0 для отмены\n");
            scanf("%d", &a);
            if (a == 1)
                ugadaika_ultra_easy();
            else if (a == 2)
                ugadaika_easy();
            else if (a == 3)
                ugadaika_normal();
            else if (a == 4)
                ugadaika_hard();
            else if (a == 5)
                ugadaika_ultra_hard();
            else if (a == 6)
                ugadaika_extreme();
            else if (a == 0)
            {
                puts("Отмена...\n");
                in[0] = '\0';
            }
        }

        else if (strcmp(in, "info") == 0)
        {
            puts("SestoOS  Copyright (C) 2023  Anatoliy6463\nThis program comes with ABSOLUTELY NO WARRANTY; for details, type \"warranty\"\nThis is free software, and you are welcome to redistribute it under certain conditions;\n");
        }
        else if (strcmp(in, "warranty") == 0)
        {
            puts("SestoOS comes with ABSOLUTELY NO WARRANTY, to the extent permitted by applicable law.\n");
        }
        else if (strcmp(in, "exit") == 0)
        {
            shutdown(5);
            break;
        }
        else if (strcmp(in, "wait") == 0)
        {
            waitmode();
        }
        else if (strcmp(in, "calc") == 0)
        {
            calculator();
        }
        else if (strcmp(in, "game") == 0)
        {
            game();
        }
        else if(strcmp(in, "007") == 0) printf("%c", '\007');
        else if(strcmp(in, "Когда выйдет Электроманьяк?") == 0)
        {
            puts("В январе 2024\n");
        }
        else if(strcmp(in, "random_number") == 0)
        {
            int n = 0;
            puts("Введите количество случайных чисел\n");
            scanf("%d", &n);
            int MAX = 0;
            int MIN = 0;
            puts("Введите максимальное значение случайного числа:\t");
            scanf("%d", &MAX);
            puts("\nТеперь тоже самое для минимального значения:\t");
            scanf("%d", &MIN);
            int random_number[n];
            puts("\n");
            srand(time(NULL));
            for (int i = 0; i < n; i++)
            {
                random_number[i] = rand()%MAX + MIN;
            }
            for (int i = 0; i < n; i++)
            {
                printf("%d", random_number[i]);
            }
        }
        else if(strcmp(in, "square_gen") == 0)
        {
            int n;
            square_gen_and_print(n);
        }
        else if(strcmp(in, "help") == 0)
        {
            puts("ugadaika – игра «Угадайка»\ninfo – информация о системе\nexit – выход\ncalc – калькулятор\ngame – T-GameC\n007 – звук предупреждения системы\nrandom_number – генератор случайных чисел\nsquare_gen – генератор квадрата\ntime – текущее время\n");
        }
        else if (strcmp(in, "time") == 0)
        {
            time(&t);
            printf("%s\n", ctime(&t));
        }
        else if (strcmp(in, "stxt") == 0)
        {
            char filenam[256];
            puts("Введите название файла:\t");
            scanf("%255[^\n]%*c", filenam);
            stxt(filenam);
        }
        else {
            printf("%s, команда не найдена, для получения списка команд, введите \"help\"\n", in);
        }
    }
}

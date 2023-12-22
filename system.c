#include <stdio.h>
#include <string.h>
#include "games.h"
#include <unistd.h>
#include "keyfrases.h"
#include "apps.h"
#include "user-keyfrases.h"
#include <time.h>
#include <stdlib.h>
#include "cube.h"
int main()
{
    char in[255];
    while(1)
    {
        scanf("%[^\n]%*c", in);
        if (strcmp(in, "ugadaika") == 0)
        {
            int a = 0;
            puts("Выберите сложность: 1, 2, 3, 4, 5, 6 или введите 0 для отмены\n");
            scanf("%d", &a);
            if (a == 1)
                ugadaika_ultra_easy();
            if (a == 2)
                ugadaika_easy();
            if (a == 3)
                ugadaika_normal();
            if (a == 4)
                ugadaika_hard();
            if (a == 5)
                ugadaika_ultra_hard();
            if (a == 6)
                ugadaika_extreme();
            if (a == 0)
            {
                puts("Отмена...\n");
            }
        }

        if (strcmp(in, "info") == 0)
        {
            puts("TolyaDOS  Copyright (C) 2023  Anatoliy6463\nThis program comes with ABSOLUTELY NO WARRANTY; for details, type \"warranty\"\nThis is free software, and you are welcome to redistribute it under certain conditions;\n");
        }
        if (strcmp(in, "warranty") == 0)
        {
             puts("TolyaDOS comes with ABSOLUTELY NO WARRANTY, to the extent permitted by applicable law.\n");
        }
        if (strcmp(in, "exit") == 0)
        {
            int time = 0;
            scanf("%d", &time);
            shutdown(time);
            break;
        }
        if (strcmp(in, "wait") == 0)
        {
            waitmode();
        }
        if (strcmp(in, "calc") == 0)
        {
            calculator();
        }
        if (strcmp(in, "game") == 0)
        {
            game();
        }
        if(strcmp(in, "007") == 0) printf("%c", '\007');
        if(strcmp(in, "Когда выйдет Электроманьяк?") == 0)
        {
            puts("В январе 2024\n");
        }
        if(strcmp(in, "random_number") == 0)
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
        
        if(strcmp(in, "square_gen") == 0)
        {
            int n;
            square_gen_and_print(n);
        }
    }
}

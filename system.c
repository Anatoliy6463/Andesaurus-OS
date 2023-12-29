#include <stdio.h>
#include <string.h>
#include "games.h"
#include <unistd.h>
#include "keyfrases.h"
#include "apps.h"
#include "user-keyfrases.h"
#include <time.h>
#include <stdlib.h>
#include "packagemanager.h"
#define _CRT_SECURE_NO_WARNINGS
void login(char[], char[]);
void login(char passwd[128], char validpass[128])
{
    FILE *f = fopen("rootpass.txt", "r");
    fgets(validpass, 127, f);
    puts("Введите пароль:\t");
    scanf("%127[^\n]%*c", passwd);
}
int main()
{
    char passwd[128], validpass[128];
    login(passwd, validpass);
    if (strcmp(passwd, validpass) == 0)
    {
        puts("Запуск...\n");
    }
    char in[512];
    puts("[Объявление]Объявление переменной для ввода данных...\nУспешно!\n");
    int inst[256] = {0};
    int root = 0;
    puts("[Объявление]Объявление переменной для разграничения прав доступа...\nУспешно!\n");
    puts("[Объявление]Объявление переменной для отображения времени...\nУспешно!\n");
    time_t t;
    puts("[Запуск]Запуск цикла...\nУспешно!\n");
    for (int i = 0; i < 101; i++)
    {
        printf("Загрузка, %d%%\n", i);
    }
    system("clear");
    while(1)
    {
        if (root == 0)
            printf("user@sessh:\t");
        if (root == 1)
            printf("root@sessh:\t");
        
        if (strcmp(in, "ugadaika") == 0 && inst[UGADAIKA] == 1)
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
                scanf("%511[^\n]%*c", in);
            }
        }
        else if (strcmp(in, "change_usr") == 0)
        {
            int k = 0;
            while (k <= 3)
            {
                FILE* f = fopen("rootpass.txt", "r");
                if (root == 0) 
                {
                    fgets(validpass, 127, f);
                    puts("Введите пароль:\t");
                    scanf("%127[^\n]%*c", passwd);
                    if (strcmp(validpass, passwd) == 0)
                    {
                        root = 1;
                        puts("[Аккаунт]Переключение с аккаунта user на аккаунт root прошло с кодом 0(Успешно)");
                    }
                    else {
                        k++;
                        puts("ВНИМАНИЕ!!! ВВЕДЁН НЕПРАВИЛЬНЫЙ ПАРОЛЬ!!!");
                    }
                    if (k == 3)
                    {
                        break;
                    }
                }
            }
            if (root == 1) 
            {
                root = 0;
                printf("user@sessh:\t");
                scanf("%511[^\n]%*c", in);
            }
        }
        else if (strcmp(in, "ugadaika") == 0 && inst[UGADAIKA] == 0)
        {
            puts("Программа \"ugadaika\" не найдена, но её можно установить с помощью команды sesto install ugadaika");
            scanf("%511[^\n]%*c", in);
        }
        else if (strcmp(in, "sesto install ugadaika") == 0 && inst[UGADAIKA] == 0 && root == 1)
        {
            puts("Установка \"ugadaika\"...\n");
            inst[UGADAIKA] = 1;
            puts("Установка завершена!\n");
        }
        else if (strcmp(in, "sesto install calc") == 0 && inst[CALC] == 0 && root == 1)
        {
            puts("Установка \"calc\"...\n");
            inst[CALC] = 1;
            puts("Установка завершена!\n");
        }
        else if (strcmp(in, "sesto install time") == 0 && inst[TIME] == 0 && root == 1)
        {
            puts("Установка \"time\"...\n");
            inst[TIME] = 1;
            puts("Установка завершена!\n");
        }
        else if (strcmp(in, "sesto install t-gamec") == 0 && inst[GAME] == 0 && root == 1)
        {
            puts("Установка \"t-gamec\"...\n");
            inst[GAME] = 1;
            puts("Установка завершена!\n");
        }
        else if (strcmp(in, "sesto install random_number") == 0 && inst[RANNUM] == 0 && root == 1)
        {
            puts("Установка \"random_number\"...\n");
            inst[RANNUM] = 1;
            puts("Установка завершена!\n");
        }
        else if (strcmp(in, "sesto install max_min") == 0 && inst[MAXMIN] == 0 && root == 1)
        {
            puts("Установка \"max_min\"...\n");
            inst[MAXMIN] = 1;
            puts("Установка завершена!\n");
        }
        else if (strcmp(in, "sesto install square_gen_and_print") == 0 && inst[CUBE] == 0 && root == 1)
        {
            puts("Установка \"square_gen_and_print\"...\n");
            inst[CUBE] = 1;
            puts("Установка завершена!\n");
        }
        else if (strcmp(in, "sesto install stxt") == 0 && inst[STXT] == 0 && root == 1)
        {
            puts("Установка \"stxt\"...\n");
            inst[STXT] = 2;
            puts("Установка завершена! Теперь нужно установить stxt-filecreate\n");
        }
        else if (strcmp(in, "sesto install stxt-filecreate") == 0 && inst[STXT] == 2 && root == 1)
        {
            puts("Установка \"stxt-filecreate\"...\n");
            inst[STXT] = 1;
            puts("Установка завершена!\n");
        }
        else if (strcmp(in, "info") == 0)
        {
            puts("SestoOS  Copyright (C) 2023  Anatoliy6463\nThis program comes with ABSOLUTELY NO WARRANTY; for details, type \"show w\"\nThis is free software, and you are welcome to redistribute it under certain conditions;\n");
            scanf("%511[^\n]%*c", in);
        }
        else if (strcmp(in, "show w") == 0)
        {
            puts("SestoOS comes with ABSOLUTELY NO WARRANTY, to the extent permitted by applicable law.\n");
            scanf("%511[^\n]%*c", in);
        }
        else if (strcmp(in, "exit") == 0)
        {
            puts("Shutdown....\n\007");
            break;
        }
        else if (strcmp(in, "wait") == 0)
        {
            waitmode();
            scanf("%511[^\n]%*c", in);
        }
        else if (strcmp(in, "calc") == 0 && inst[CALC] == 1)
        {
            calculator();
            scanf("%511[^\n]%*c", in);
        }
        else if (strcmp(in, "calc") == 0 && inst[CALC] == 0)
        {
            puts("Программа \"calc\" не найдена, но её можно установить с помощью команды sesto install calc");
            scanf("%511[^\n]%*c", in);
        }
        else if (strcmp(in, "game") == 0 && inst[GAME] == 1)
        {
            game();
            scanf("%511[^\n]%*c", in);
        }
        else if (strcmp(in, "game") == 0 && inst[GAME] == 0)
        {
            puts("Программа \"game\" не найдена, но её можно установить с помощью команды sesto install t-gamec");
            scanf("%511[^\n]%*c", in);
        }
        else if(strcmp(in, "007") == 0) printf("\007");
        else if(strcmp(in, "Когда выйдет Электроманьяк?") == 0)
        {
            puts("В январе 2024\n");
            scanf("%511[^\n]%*c", in);
        }
        else if(strcmp(in, "random_number") == 0 && inst[RANNUM] == 1)
        {
            int n = 0;
            puts("Введите количество случайных чисел\n");
            scanf("%d", &n);
            if (n <= 0)
            {
                puts("НЕВОЗМОЖНО СОЗДАТЬ ОТРИЦАТЕЛЬНОЕ КОЛИЧЕСТВО СЛУЧАЙНЫХ ЧИСЕЛ!!!\007\n");
                scanf("%d", &n);
            }
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
            puts("\n");
            scanf("%511[^\n]%*c", in);
        }
        else if (strcmp(in, "random_number") == 0 && inst[RANNUM] == 0)
        {
            puts("Программа \"random_number\" не найдена, но её можно установить с помощью команды sesto install random_number");
            scanf("%511[^\n]%*c", in);
        }
        else if (strcmp(in, "max_min") == 0 && inst[MAXMIN] == 1) 
        {
            int a;
            puts("Сколько чисел вы хотели бы сравнить?\n");
            scanf("%d", &a);
            int n[a];
            max_and_min(a, n);
        }
        else if (strcmp(in, "max_min") == 0 && inst[MAXMIN] == 0)
        {
            puts("Программа \"max_min\" не найдена, но её можно установить с помощью команды sesto install max_min");
            scanf("%511[^\n]%*c", in);
        }
        else if(strcmp(in, "square_gen") == 0 && inst[CUBE] == 1)
        {
            int n;
            square_gen_and_print(n);
            scanf("%511[^\n]%*c", in);
        }
        else if (strcmp(in, "square_gen") == 0 && inst[CUBE] == 0)
        {
            puts("Программа \"square_gen\" не найдена, но её можно установить с помощью команды sesto install square_gen_and_print");
            scanf("%511[^\n]%*c", in);
        }
        else if(strcmp(in, "help") == 0)
        {
            puts("ugadaika – игра «Угадайка»\nchange_usr – сменить пользователя\ninfo – информация о системе\nexit – выход\ncalc – калькулятор\ngame – T-GameC\n007 – звук предупреждения системы\nrandom_number – генератор случайных чисел\nsquare_gen – генератор квадрата\ntime – текущее время\nmax_min – нахождение максимального и минимального числа\n");
            scanf("%511[^\n]%*c", in);
        }
        else if (strcmp(in, "time") == 0 && inst[TIME] == 1)
        {
            time(&t);
            printf("%s\n", ctime(&t));
            scanf("%511[^\n]%*c", in);
        }
        else if (strcmp(in, "time") == 0 && inst[TIME] == 0)
        {
            puts("Программа \"time\" не найдена, но её можно установить с помощью команды sesto install time");
            scanf("%511[^\n]%*c", in);
        }
        else if (strcmp(in, "stxt") == 0 && inst[STXT] == 1)
        {
            char filenam[128];
            puts("Введите название файла:\t");
            scanf("%127[^\n]%*c", filenam);
            stxt(filenam);
        }
        else if (strcmp(in, "stxt") == 0 && inst[STXT] == 0)
        {
            puts("Программа \"stxt\" не найдена, но её можно установить с помощью команды sesto install stxt, а затем sesto install stxt-filecreate");
            scanf("%511[^\n]%*c", in);
        }
        else if (strcmp(in, "stxt") == 0 && inst[STXT] == 2)
        {
            puts("Программа \"stxt\" найдена, но зависимость \"stxt-filecreate\" не установлена, её можно установить с помощью команды sesto install stxt-filecreate");
            scanf("%511[^\n]%*c", in);
        }
        else if (strcmp(in, "kill system") == 0)
        {
            killsys();
            break;
        }
        else {
            printf("%s, команда не найдена, для получения списка команд, введите \"help\"\n", in);
            scanf("%511[^\n]%*c", in);
        }
    }
}

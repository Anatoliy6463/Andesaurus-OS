#include <stdio.h>
#include "extra/keys.h"
#include "extra/events.h"
#include <stdlib.h>
#include <time.h>
void game() // T-GameC
{
  int X = 1;
  int Y = 1;
  int inp;
  int persiki = 0;
  int hunger = 0;
  int hp = 100;
  int money = 50;
  int ta = 0;
  int result;
  while (inp != 'q')
  {
    inp = getchar();
    printf("Координаты:%d;%d\nГолод:%d\nЗдоровье:%d\nКоличество либрбаксов:%d\n", X, Y, hunger, hp, money);
    if (inp == 'w') Y++;
    if (inp == 'a') X--;
    if (inp == 's') Y--;
    if (inp == 'd') X++;
    persikinteract(X, Y, persiki, hunger, inp);
    if (X % 15 == 0 && Y % 15 == 0)
    {
      break;
      shop(money, ta, persiki);
      continue;
    }
    if (hunger < 0) heal(hunger, hp);
    if (hunger > 100) damage(hunger, hp);
    if (hp < 0) 
    {
      die();
      break;
    }
    if (inp == 't') 
    {
      check(ta, result);
      if (result == 1) teleport(X, Y, result, money);  
    }
  }
}
void ugadaika_ultra_easy()
{
    srand(time(NULL));
    int n = rand()%25 + 1;
    int a = 0;
    while (a != n)
    {
        scanf("%d", &a);
        if (a > n) puts("Ваше число больше\n");
        if (a < n) puts("Ваше число меньше\n");
        if (a == n)
        {
            puts("Вы угадали!\n");
            break;
        }
    }
}
void ugadaika_easy()
{
    srand(time(NULL));
    int n = rand()%50 + 1;
    int a = 0;
    while (a != n)
    {
        scanf("%d", &a);
        if (a > n) puts("Ваше число больше\n");
        if (a < n) puts("Ваше число меньше\n");
        if (a == n)
        {
            puts("Вы угадали!\n");
            break;
        }
    }
}
void ugadaika_normal()
{
    srand(time(NULL));
    int n = rand()%100 + 1;
    int a = 0;
    while (a != n)
    {
        scanf("%d", &a);
        if (a > n) puts("Ваше число больше\n");
        if (a < n) puts("Ваше число меньше\n");
        if (a == n)
        {
            puts("Вы угадали!\n");
            break;
        }
    }
}
void ugadaika_hard()
{
    srand(time(NULL));
    int n = rand()%125 + 1;
    int a = 0;
    while (a != n)
    {
        scanf("%d", &a);
        if (a > n) puts("Ваше число больше\n");
        if (a < n) puts("Ваше число меньше\n");
        if (a == n)
        {
            puts("Вы угадали!\n");
            break;
        }
    }
}
void ugadaika_ultra_hard()
{
    srand(time(NULL));
    int n = rand()%100 + 1;
    int a = 0;
    while (a != n)
    {
        scanf("%d", &a);
        if (a > n) 
        {
            puts("Ваше число больше\n");
            n = rand()%100+1;
        }
        if (a < n) 
        {
            puts("Ваше число меньше\n");
            n = rand()%100+1;
        }
        if (a == n)
        {
            puts("Вы угадали!\n");
            break;
        }
    }
}
void ugadaika_extreme()
{
    srand(time(NULL));
    int n = rand()%200 + 1;
    int a = 0;
    int max = 200;
    while (a != n)
    {
        scanf("%d", &a);
        if (a > n) 
        {
            max+=25;
            puts("Ваше число больше\n");
            n = rand()%max+1;
        }
        if (a < n) 
        {
            max+=25;
            puts("Ваше число меньше\n");
            n = rand()%max+1;
        }
        if (a == n)
        {
            puts("Вы угадали!\n");
            break;
        }
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*
*    Simple apps for Andesaurus-OS.
*    Copyright (C) 2023  AndesaurusSoft
*/
void file_create(char filenam[256])
{
    FILE *f = fopen(filenam, "w");
    if ((f = fopen(filenam, "r")) != NULL)
    {
      puts("ОШИБКА! ФАЙЛ БЫЛ СОЗДАН НЕПРАВИЛЬНО\007\n");
      f = fopen(filenam, "w");
    }
}
void exponentiation(double a, double a2, double n)
{
    a2 = a;
    for (int i = 1; i < n; i++)
        a2 = a * a;
}
int calculator()
{
    double a, b, c = 0;
    int in;
    in = getchar();
    scanf("%lg", &a);
    scanf("%lg", &b);
    if (in == '+') c = a + b;
    if (in == '-') c = a - b;
    if (in == 'x' || in == '*') c = a * b;
    if (in == '/' || in == ':') c = a / b;
    if (in == '^') exponentiation(a, c, b);
    if (in == 'c') c = cos(a);
    if (in == 's') c = sin(a);
    if (in == 'a')
    {
        puts("Арккосинус(1) или Арксинус?(2)");
        scanf("%lg", &b);
        if (b == 1.00) acos(a);
        if (b == 2.00) asin(a);
        return (0);
    }
    printf("%lg\n", c);
    return (0);
}
void edit_line(char* buffer, int current_line)
{
  for (int i = 0; i < current_line; i++) {
    strchr(buffer, '\n') + 1;
  }
  char* line_end = strchr(buffer, '\n');
  char saved[2048] = {0};
  strcpy(saved, line_end);
  scanf("%2047[^\n]%*c", buffer);
  strcpy(buffer + strlen(buffer), saved);
}
int stxt(char filenam[256])
{
  FILE *f;
  if (fopen(filenam, "r+") == NULL)
  {
    f = fopen(filenam, "w");
  }
  else {
    f = fopen(filenam, "r+");
  }
  char buffer[2048] = {0};
  fread(buffer, 2048, 1, f);
  fclose(f);
  printf("\n%s\n", buffer);
  int current_line = 0;
  scanf ("%d", &current_line);
  edit_line(buffer, current_line);
  f = fopen(filenam, "w");
  fwrite(buffer, strlen(buffer), 1, f);
  fclose(f);
}
void square_gen_and_print(int n[2])
{
    puts("Введите размер куба:\t");
    scanf("%d", &n[0]);
    scanf("%d", &n[1]);
    getchar();
    if (n[1] <= 0 || n[0] <= 0)
    {
      puts("ERROR\n\007\007\n");
      scanf("%d", &n[0]);
      scanf("%d", &n[1]);
    }
    char cube[n[1]][n[0]];
    puts("Starting the cube generation...\n");
    for (int i = 0; i < n[1]; i++)
    {
        for (int j = 0; j < n[0]; j++)
            cube[i][j] = '*';
    }
    puts("Starting print process...\n\n\n");
    for (int i = 0; i < n[1]; i++)
    {
        for (int j = 0; j < n[0]; j++)
            printf("%c", cube[i][j]);
        printf("%c", '\n');
    }
    puts("\007\n");
    return;
}
void max_and_min(int a, int n[])
{
  int MAX = 0;
  int MIN = 1048576;
  double med = 0.00;
  for (int i = 0; i < a; i++)
  {
    scanf("%d", &n[i]);
    med += n[i];
    if (n[i] > MAX) MAX = n[i];
    if (n[i] < MIN) MIN = n[i];
  }
  med /= a;
  printf("MAX=%d\nMIN=%d\nMED:%g\n\007", MAX, MIN, med);
}

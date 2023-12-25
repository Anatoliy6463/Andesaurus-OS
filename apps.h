#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void file_create(char filenam[256])
{
    FILE *f = fopen(filenam, "w");
    if ((f = fopen(filenam, "w")) != NULL)
    {
      puts("ОШИБКА №1, ФАЙЛ НЕПРАВИЛЬНО СОЗДАН, ДЛЯ ПОЛУЧЕНИЯ ИНФОРМАЦИИ, ПЕРЕЙДИТЕ ПО ССЫЛКЕ");
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
        puts("Арккосинус(1) или арксинус?(2)");
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
  if ((f = fopen(filenam, "r+")) == NULL)
  {
    file_create(filenam);
    getchar();
    f = fopen(filenam, "r+");
  }
  else {
    f = fopen(filenam, "r+");
  }
  char buffer[2048] = {0};
  fread(buffer, 2048, 1, f);
  fclose(f);
  printf("Состав:\n%s\n", buffer);
  int current_line = 0;
  scanf ("%d", &current_line);
  edit_line(buffer, current_line);
  f = fopen(filenam, "w");
  fwrite(buffer, strlen(buffer), 1, f);
  fclose(f);
}
void square_gen_and_print(int n)
{
    puts("Введите длину грани квадрата:\t");
    scanf("%d", &n);
    char cube[n][n];
    puts("Запускается генерация куба... подождите\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cube[i][j] = '*';
    }
    puts("Запускается печать куба...\n\n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%c", cube[i][j]);
        printf("%c", '\n');
    }
    puts("Печать куба завершена!");
    return;
}
#include <stdio.h>
int square_gen_and_print(int n)
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
    return (0);
}
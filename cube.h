#include <stdio.h>
int square_gen_and_print(int n)
{
    puts("Введите длину грани квадрата:\t");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%c", '*');
        printf("%c", '\n');
    }
    return (0);
}
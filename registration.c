#include <stdio.h>
#include <stdlib.h>
int main()
{
    puts("Добро пожаловать в Sesto-OS! Вам нужно будет создать аккаунт, введите пароль который будет использоваться для получения прав суперпользователя:\t");
    char pass[16] = {0};
    scanf("%15[^\n]%*c", pass);
    FILE *f = fopen("rootpass.txt", "r+");
    for (int i = 0; i < 15; i++)
    {
        fprintf(f, "%c", pass[i]);
    }
    puts("\nТеперь вы можете использовать Sesto-OS!\n");  
    system("./sys");
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
*    Simple registration program for Andesaurus-OS.
*    Copyright (C) 2023  AndesaurusSoft
*/
int main()
{
    puts("Добро пожаловать! Вам нужно будет создать аккаунт, введите пароль:\t");
    char pass[16] = {0};
    fgets(pass, 16, stdin);
        if ((strlen(pass) > 0) && (pass[strlen (pass) - 1] == '\n'))
            pass[strlen (pass) - 1] = '\0';
    FILE *f = fopen("rootpass.txt", "w");
    fputs(pass, f);
    fclose(f);
    puts("\nЗагрузка....\n");  
    system("./sys");
}

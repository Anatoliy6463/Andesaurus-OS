#include <stdio.h>
#include <string.h>
#include "games.h"
void checkpass(char* password)
{
    char* validpass = "passwd";
    if (password == validpass) {
        puts("Добро пожаловать в TolyaDOS!\n");
    }
}
int main()
{
    char* key = "\0";
    scanf("%s", key);
    checkpass (key);
    
    while (key != "quit")
    {
        puts("Введите команду или quit для выхода\n");
        scanf("%s", key);
        if (key == "volshebnoeboloto" || key == "T-GameC" || key == "t-gamec" || key == "game")
        {
            game();
        }
        if (key == "ugadaika")
        {
            puts("Выберите сложность: ультра-лёгкая - 1, лёгкая - 2, нормальная - 3, сложная - 4, ультра-сложная - 5, экстремальная - 6");
            int choice;
            scanf("%d", &choice);
            if (choice == 1) ugadaika_ultra_easy();
            if (choice == 2) ugadaika_easy();
            if (choice == 3) ugadaika_normal();
            if (choice == 4) ugadaika_hard();
            if (choice == 5) ugadaika_ultra_hard();
            if (choice == 6) ugadaika_extreme();
        }
        if (key == "ls")
        {
            puts("game \n ugadaika \n");
        }
    }
}

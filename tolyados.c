#include <stdio.h>
#include <string.h>
#include "games.h"
int main()
{
    char* key = "\0";
    
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
        if (key == "author")
        {
            puts("Tolya-DOS  Copyright (C) 2023  Anatoliy6463\nThis program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.\nThis is free software, and you are welcome to redistribute itunder certain conditions; type `show c' for details.");
        }
        if (key == "show w")
        {
            puts("TolyaDOS comes with ABSOLUTELY NO WARRANTY, to the extent permitted by applicable law.");
        }
        if (key == "show c")
        {
            puts("TolyaDOS is protected by GNU GPL v3 which is following four freedoms: The freedom to run the program as you wish, for any purpose.\nThe freedom to study how the program works, and change it so it does your computing as you wish. Access to the source code is a precondition for this.\nThe freedom to redistribute copies so you can help your neighbor.\nThe freedom to distribute copies of your modified versions to others. By doing this you can give the whole community a chance to benefit from your changes. Access to the source code is a precondition for this.\n");
        }
    }
}

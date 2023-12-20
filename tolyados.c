#include <stdio.h>
#include <string.h>
#include "games.h"
#include "apps.h"
void checkpass(char* password)
{
    char* validpass = "passwd";
    if (password == validpass) {
        puts("Добро пожаловать в TolyaDOS!\n");
    }
}
int main(int argc, char** argv)
{
    checkpass (argv[1]);
    char* key = "\0";
    while (key != "exit")
    {
        puts("Введите команду или quit для выхода\n");
        scanf("%s", key);
        if (key == "volshebnoeboloto" || key == "T-GameC" || key == "t-gamec" || key == "game")
        {
            game();
        }
        if (key == "ugadaika")
        {
            ugadaika();
        }
        if (key == "ls")
        {
            cout <<"game \n ugadaika \n nword\n";
        }
    }
}

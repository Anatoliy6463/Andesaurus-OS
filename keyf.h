#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/*
*    Command list for Andesaurus-OS.
*    Copyright (C) 2023  AndesaurusSoft
*/
void waitmode()
{
    while(1)
    {
        puts("Wait mode, press any key to exit");
        getchar();
        break;
    }
}
void killsys()
{
    srand(time(NULL));
    puts("Kernel panic!!!\n");
    sleep(rand()%10 + 1);
    return;
}
void deleten(char* in)
{
    if ((strlen(in) > 0) && (in[strlen (in) - 1] == '\n'))
        in[strlen (in) - 1] = '\0';
}
void clear(char* in)
{
    for (int i = 0; i < sizeof(in); i++)
    {
        in[i] = '\0';
    }
}

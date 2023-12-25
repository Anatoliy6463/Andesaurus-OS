#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
int waitmode()
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
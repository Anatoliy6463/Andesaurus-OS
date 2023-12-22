#include <complex.h>
#include <stdio.h>
#include <unistd.h>
int shutdown(int time)
{
    sleep(time);
    puts("Shutting down the system\n\007");
}
int waitmode()
{
    while(1)
    {
        puts("Wait mode, press any key to exit");
        getchar();
        break;
    }
}
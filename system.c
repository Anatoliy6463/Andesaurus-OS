#include <stdio.h>
#include "games.h"
#include <unistd.h>
int main()
{
    char* in;
    while(in != "exit")
    {
        scanf("%[^\n]%*s", in);
        if (in == "ugadaika")
        {
            int a = 0;
            puts("Выберите сложность: 1, 2, 3, 4, 5, 6\n");
            scanf("%d", &a);
            if (a == 1)
                ugadaika_ultra_easy();
            if (a == 2)
                ugadaika_easy();
            if (a == 3)
                ugadaika_normal();
            if (a == 4)
                ugadaika_hard();
            if (a == 5)
                ugadaika_ultra_hard();
            if (a == 6)
                ugadaika_extreme();
        }
        if (in == "info")
        {
            puts("TolyaDOS  Copyright (C) 2023  Anatoliy6463\nThis program comes with ABSOLUTELY NO WARRANTY; for details, type \"warranty\"\nThis is free software, and you are welcome to redistribute it
    under certain conditions;\n");
        }
        if (in == "warranty")
        {
             puts("TolyaDOS comes with ABSOLUTELY NO WARRANTY, to the extent permitted by applicable law.\n");
        }
        if (in == "exit")
        {
            puts("Shutting down the system\n");
            puts("Turning down the cycle\n");
            puts("SHUTDOWN..... \007");
        }
        if (in == "exit")
        {
            puts("Shutting down the system\n");
            puts("Turning down the cycle\n");
            break;
            puts("SHUTDOWN..... \007");
        }
        if (in == "shutdown")
        {
            sleep(5);
            puts("Shutting down the system\n");
            puts("Turning down the cycle\n");
            break;
            puts("SHUTDOWN..... \007");
        }
        if (in == "wait")
        {
            break;
            puts("Press any key to continue\n");
            getchar();
            continue;
        }
    }
}

#include <stdio.h>
#include <string.h>
void deleten(char* in)
{
    if ((strlen(in) > 0) && (in[strlen (in) - 1] == '\n'))
        in[strlen (in) - 1] = '\0';
}

#include <stdio.h>
int println(const char *s)
{
        fprintf(stdout, "%s\n", s);
}
int printbell(const char *s)
{
        fprintf(stdout, "%s\007", s);
}
int bell()
{
        fputs("\007", stdout);
}

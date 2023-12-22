#include <stdio.h>
#include <math.h>
void exponentiation(double a, double a2, double n)
{
    a2 = a;
    for (int i = 1; i < n; i++)
        a2 = a * a;
}
int calculator()
{
    double a, b, c = 0;
    int in;
    in = getchar();
    scanf("%g", &a);
    scanf("%g", &b);
    if (in == '+') c = a + b;
    if (in == '-') c = a - b;
    if (in == 'x' || in == '*') c = a * b;
    if (in == '/' || in == ':') c = a / b;
    if (in == '^') exponentiation(a, c, b);
    if (in == 'c') c = cos(a);
    if (in == 's') c = sin(a);
    if (in == 'a')
    {
        puts("Арккосинус(1) или арксинус?(2)");
        scanf("%g", &b);
        if (b == 1.00) acos(a);
        if (b == 2.00) asin(a);
    }
    printf("%g\n", c);
    return (0);
}

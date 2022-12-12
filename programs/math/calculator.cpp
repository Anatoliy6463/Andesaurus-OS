#include <iostream>
int main()
{
float A;
float B;
float C;
char znak;
cin >> A >> znak >> C;
if (znak == '+') C = A + B;
if (znak == '-') C = A + B;
if (znak == '*') C = A + B;
if (znak == '/') C = A + B;
if (znak == '^') 
{
float a2;
for (int i = 0; i < A; i++)
{
a2*=a;
}
cout <<A<<endl;
}
cout <<C<<endl;
return 0;
}

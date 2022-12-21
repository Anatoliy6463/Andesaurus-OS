#include <iostream>
using namespace std;
int main()
{
    int number = 72;
    int A;
    while (A != number)
    {
        cin >> A;
        if (A < number)
        {
        cout <<"Ваше число меньше"<<endl;
        }
        if (A > number)
        {
        cout <<"Ваше число больше"<<endl;
        }
        if (A == number)
        {
        cout <<"Вы выиграли!"<<endl;
        }
    }
}
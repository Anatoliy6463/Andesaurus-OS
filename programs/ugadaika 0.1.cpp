#include <iostream>
using namespace std;
int main()
{
    int number = 72;
    int A;
    cin >> A;
    if (A < number)
    {
        cout <<"Less"<<endl;
    }
    if (A > number)
    {
        cout <<"More"<<endl;
    }
    if (A == number)
    {
        cout <<"Вы выиграли!"<<endl;
    }
}
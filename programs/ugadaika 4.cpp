#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(NULL));
    int number = rand()%100 + 1;
    int a;
    int k = 0;
    while (a != number)
    {
        k++;
        a = rand()%100 + 1;
        if (a > number)
        { 
        cout <<"Ваше число больше"<<endl;
        }
        if (a < number)
        { 
        cout <<"Ваше число меньше"<<endl;
        }
        if (a == number)
        { 
        cout <<"Вы угадали!"<<endl;
        break;
        }
    }
    return 0;
}
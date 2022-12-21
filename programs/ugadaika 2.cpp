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
        cin >> a;
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
        if (k >= 15)
        {
            cout <<"Game Over!"<<endl;
            break;
            return 0;
        }
    }
    return 0;
}
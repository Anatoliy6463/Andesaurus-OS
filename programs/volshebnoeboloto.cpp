#include <iostream>
using namespace std;
int main()
{
    int x = 1;
    int y = 1;
    int flag = 0;
    int money = 5;
    int hp = 100;
    int uron = 1;
    char znak;
    while (znak != 'q')
    {
        cout <<"ваши координаты "<<x<<';'<<y<<'\n';
        cout <<"Введите направление или q для выхода \n";
        cin >> znak;
        if (znak == 'w') y++;
        if (znak == 'a') x--;
        if (znak == 's') y--;
        if (znak == 'd') x++;
        if (x == 7 && y == 6 && flag == 0) 
        {
            flag = 1;
            cout <<"Вы нашли сокровище!"<<endl;
            money+=5000;
        }
        if (x >= 10 && x <= 15 && y <= 15 && y >= 10)
        {
            cout <<"Здесь живёи дракон! А. Приручить Б. Убить \n";
            if (znak == 'a')
            {
                hp = 500;
                uron+=100;
            }
        }
    }
}
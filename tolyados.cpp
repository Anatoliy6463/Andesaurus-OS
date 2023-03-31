#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
using namespace std;

void checkpass(string password)
{
    string validpass = "123456";
    if (password == validpass) {
        cout <<"Добро пожаловать в TolyaDOS!\n";
    }
    else {
        int timer = 5;
        while (timer != -1)
        {
            sleep(1);
            cout <<"Ваш компьютер будет уничтожен через "<<timer<<" секунд\n";
            timer--;
        }
    }
}
void volshebnoeboloto(){
    int64_t X = 1;
    int64_t Y = 1;
    int hp = 100;
    int flag = 0;
    float money = 50;
    int armor = 0;
    int car = 0;
    int sword = 0;
    int64_t fungus = 0;
    int dragonhp = 1500;
    int luck;
    char dir;
    while (dir != 'q')
    {
    srand(time(NULL));
    cout <<"Ваши координаты "<<X<<';'<<Y<<endl;
    cout <<"Введите направление или q для выхода \n";
    cout <<"У вас "<<hp<<" hp \n";
    cout <<"У вас "<<money<<" болотобаксов \n";
    cin >> dir;
    if (dir == 'w' && car != 1) Y++;
    if (dir == 'a' && car != 1) X--;
    if (dir == 's' && car != 1) Y--;
    if (dir == 'd' && car != 1) X++;
    if (dir == 'w' && car == 1) Y+=3;
    if (dir == 'a' && car == 1) X-=3;
    if (dir == 's' && car == 1) Y-=3;
    if (dir == 'd' && car == 1) X+=3;
    if (X == 7 && Y == 6 && flag == 0)
    {
        cout <<"Ура! Вы нашли сокровище! \n";
        money+=5000;
        flag = 1;
    }
    if (X % 6 == 0 && Y % 6 == 0)
    {
        cout <<"Вы нашли гриб! \n";
        fungus++;
    }
    if (X >= 10 && X <= 12 && Y >= -5 && Y <= 25 && armor == 0 && dragonhp > 0)
    {
        cout <<"Здесь живёт дракон! \n";
        hp-=3;
        if (sword == 1)
        {
            if (dir == 'k')
            {
                dragonhp-=25;
            }
        }
    }
    if (X >= 10 && X <= 12 && Y >= -5 && Y <= 25 && armor == 1  && dragonhp > 0)
    {
        cout <<"Здесь живёт дракон! \n";
        hp--;
        if (sword == 1)
        {
            if (dir == 'k')
            {
                dragonhp-=25;
            }
        }
    }
    if (dragonhp <= 0)
    {
      cout <<"Вы победили дракона! \n"<<"туту-туту-туту!";
      break;
    }
    if (X == 5 && Y == 14)
    {
        cout <<"Введите координаты телепортации X Y \n";
        cin >> X >> Y;
        cout <<"Teleport Activating \n";
        luck = rand()%5 + 1;
        if (luck < 3)
        {
            cout <<"1 января 1970 года 00:00 \n";
            cout <<"Kernel Panic \n";
            hp = 0;
        }
    }
    if (X == 8 && Y == 8)
    {
        luck = rand()%5 + 0;
        if (luck >= 3)
        {
        cout <<"Вы нашли аптечку! \n";
        hp = 100;
        }
        if (luck < 3)
        {
        cout <<"Вы нашли аптечку! \n";
        hp-=10;
        cout <<"Это была фейковая аптечка. \n";
        }
    }
    if (X >= 8 && X <= 9 && Y >= 12 && Y <= 15)
    {
      cout <<"Купить или продать? A/B \n";
      if (dir == 'B')
      {
        cout <<"Вы продали грибы \n";
        money+=20*fungus;
        fungus = 0;
        cout <<money<<endl;
      }
    }
    if (X == 4 && Y == 6)
    {
        cout <<"Добро пожаловать в магазин Vector++ \n";
        cout <<"Что вы хотите купить? \n";
        cout <<"Броню? \n";
        cout <<"Мечь? \n";
        cout <<"Лазерган? \n";
        cout <<"ВекторМобиль? \n";
        cout <<"Аптечку? \n";
        if (dir == 'A' && armor == 0 && money > 50)
        {
            cout <<"Вы купили броню! \n";
            armor = 1;
        }
        if (dir == 'B' && sword == 0 && money > 75)
        {
            cout <<"Вы купили меч! \n";
            sword = 1;
            cout <<"Чтобы нанести урон мечом нажмите k \n";
        }
        if (dir == 'C')
        {
            cout <<"Вы купили лазерган! \n";
            hp = 0;
        }
        if (dir == 'D' && car == 0 && money > 1500)
        {
            cout <<"Вы купили Автомобиль! \n";
            cout <<"Чтобы выключить двигатель автомобиля нажмите f \n";
            cout <<"Чтобы включить двигатель автомобиля нажмите v \n";
            car = 1;
        }
        if (dir == 'E' && money > 15)
        {
            cout <<"Вы купили аптечку! \n";
            hp = 100;
        }
    }
    if (car == 1 && dir == 'f')
    {
        car = 2;
        cout <<"Вы выключили двигатель автомобиля. \n";
    }
    if (car == 2 && dir == 'v')
    {
        car = 1;
        cout <<"Вы включили двигатель автомобиля. \n";
    }
    if (hp <= 0)
    {
        cout <<"Game Over! \n";
        break;
    }
    if (X == 50 && Y == 7)
      cout <<"Здесь находится статуя исследователя который пропал недалеко отсюда. Дальше нельзя! \n";
    }
    if (X == 50 && Y == 50)
    {
      cout <<"Здесь находится статуя исследователя который пропал недалеко отсюда. Дальше нельзя! \n";
    }
    if (X == 50 && Y == -50)
    {
      cout <<"Здесь находится статуя исследователя который пропал недалеко отсюда. Дальше нельзя! \n";
    }
    if (X == -50 && Y == -1)
    {
      cout <<"Здесь находится статуя исследователя который пропал недалеко отсюда. Дальше нельзя! \n";
    }
    if (X == -50 && Y == 50)
    {
      cout <<"Здесь находится статуя исследователя который пропал недалеко отсюда. Дальше нельзя! \n";
    }
    if (X == -50 && Y == -50)
    {
      cout <<"Здесь находится статуя исследователя который пропал недалеко отсюда. Дальше нельзя! \n";
    }
    if (X > 120 && X < 500)
    {
      if (money > 0 && car != 1)
        money-=money/10;
      cout <<"Здесь находятся воришки которые забирает у вас 1/10 состояния \n";
    }
    if (X > 500 && X < 1500)
    {
      cout <<"Тут на каждом шагу камни и ямы. \n";
      if (car != 1)
        hp-=5;
    }
    if (X > 1500 && X < 5000)
    {
      cout <<"Тут живут монстры. \n";
      if (car != 1 && armor == 0)
          hp-=10;
      if (car != 1 && armor == 1)
          hp-=5;
      if (car == 1 && armor == 0)
          hp-=7;
      if (car == 1 && armor == 1)
          hp--;
    }
    if (X > 5000 && X < 10000)
    {
      cout <<"Здесь ничего нет. \n";
    }
    if (X > 10000 && X < 49832)
    {
      cout <<"Здесь был только один человек(не считая вас). \n";
    }
    if (X == 49832 && Y == 43231)
    {
      cout <<"Вы побили мировой рекорд! \n";
    }
    if (X >= 2147483647 || Y >= 2147483647 || X <= -2147483647 || Y <= -2147483647)
    {
      cout <<"Вы нашли дальние земли! \n";
      if (car == 1)
        car = 2;
      if (X <= 2147483647 || Y <= 2147483647 && car == 2)
        car = 1;
    }
    if (X == 9223372036854775807 || Y == 9223372036854775807 || X == -9223372036854775807 || Y == -9223372036854775807)
    {
      cout <<"Конец. Волшебное болото закончилось \n";
      break;
    }
    }
}
void ugadaika()
{
    srand(time(NULL));
    int number = rand()%100;
    int A;
    int k = 0;
    while (A != number)
    {
        cout <<"Введите число\n";
        cin >> A;
        k++;
        if (A < number) cout <<"Ваше число меньше\n";
        if (A > number) cout <<"Ваше число больше\n";
        if (A == number)
        {
            cout <<"Вы победили! "<<k<<" \n";
            break;
        }
        if (k >= 15)
        {
            cout <<"Game Over\n";
            break;
        }
    }
}
int main()
{
    string userpass;
    cout <<"Введите пароль\n";
    getline(cin, userpass);
    checkpass (userpass);
    string key;
    while (key != "exit")
    {
        cout <<"Введите команду или quit для выхода\n";
        cin >> key;
        if (key == "volshebnoeboloto")
        {
            volshebnoeboloto();
        }
        if (key == "ugadaika")
        {
            ugadaika();
        }
        if (key == "dir")
        {
            cout <<"volshebnoeboloto \n ugadaika \n nword\n";
        }
    }
}

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring> 
using namespace std;
int main()
{
    string key;
    int A;
    float level = 1;
    int downloadsgames = 0;
    int song = 0;
    cout <<"Добро пожаловать в TolyaDOS v0.0.4-alpha \n";
    while (key != "q")
    {
    cin >> key;
    if (key == "ls" && level == 1)
    {
        cout <<"Documents \n";
        cout <<"Downloads \n";
        cout <<"readme.txt \n";
        cout <<"Songs \n";
    }
    if (key == "readme" && level == 1)
    {
        cout <<"Добро пожаловать в TolyaDOS Build 1800 \n";
    }
    if (key == "Documents" && level == 1)
    {
        cout <<"Здесь пусто \n";
    }
    if (key == "Downloads" && level == 1 && downloadsgames == 0)
    {
        cout <<"Откройте браузер и скачайте файлы";
    }
    if (key == "Downloads" && level == 1 && downloadsgames == 1)
    {
        cout <<"Угадайка 2 \n";
        cout <<"Угадайка 3 \n";
        cout <<"Угадайка 4 \n";
        cout <<"Угадайка 5 \n";
    }
    if (key == "Downloads" && level == 1 && downloadsgames == 2)
    {
        cout <<"ugadaika2 \n";
        cout <<"ugadaika3 \n";
        cout <<"ugadaika4 \n";
        cout <<"ugadaika5 \n";
        cout <<"volshebnoeboloto \n";
    }
    if (key == "Downloads" && level == 1 && downloadsgames == 3)
    {
        cout <<"ugadaika2 \n";
        cout <<"ugadaika3 \n";
        cout <<"ugadaika4 \n";
        cout <<"ugadaika5 \n";
        cout <<"volshebnoeboloto \n";
        cout <<"biletik \n";
    }
    if (key == "Songs" && level == 1 && song >= 1)
    {
        cout <<"atyizobreti \n";
    }
    if (key == "atyizobreti" && song >= 1)
    {
        cout <<"А ты изобрети \n А ты изобрети \n как море переплыть \n как гору перейти \n как к звёздам полететь и там друзей найти \n никто не знает как это изобрести \n новаторы в пути!";
    }
    if (key == "ugadaika2" && level == 1 && downloadsgames >= 1)
    {
        cout <<"Откройте файл ugadaika2.cpp \n";
    }
    if (key == "ugadaika3" && level == 1 && downloadsgames >= 1)
    {
        cout <<"Откройте файл ugadaika3.cpp \n";
    }
    if (key == "ugadaika4" && level == 1 && downloadsgames >= 1)
    {
        cout <<"Откройте файл ugadaika4.cpp \n";
    }
    if (key == "ugadaika5" && level == 1 && downloadsgames >= 1)
    {
        cout <<"Откройте файл ugadaika5.cpp \n";
    }
    if (key == "volshebnoeboloto" && level == 1 && downloadsgames >= 2)
    {
        cout <<"Откройте файл volshebnoeboloto.cpp \n";
    }
    if (key == "biletik" && level == 1 && downloadsgames >= 3)
    {
        cout <<"Откройте файл bilet.cpp \n";
    }
    if (key == "help")
    {
        cout <<"ls - Список папок и файлов в текущей папке\n";
        cout <<"browser - открывает браузер \n";
        cout <<"internet - открывает браузер \n";
        cout <<"cd - открывает папку \n";
        cout <<"cd.. - открывает папку \n";
        cout <<"vi открывает редактор vi \n";
    }
    if (key == "browser")
    {
        cout <<"Чтобы скачать игры напишите install games \n";
        cout <<"Чтобы послушать песни напишите songs \n";
        if (key == "songs")
        {
            song = 1;
        }
        if (key == "install games")
        {
            cout <<"Чтобы установить угадайку напишите A \n";
            cout <<"Чтобы установить угадайку и волшебное болото напишите B \n";
            cout <<"Чтобы установить угадайку, волшебное болото, счастливый билетик напишите C \n";
            if (key == "A")
            {
                downloadgames++;
            }
            if (key == "B")
            {
                downloadgames = 2;
            }
            if (key == "C")
            {
                downloadgames = 3;
            }
        }
    }
    }
}

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string> 
using namespace std;
int main()
{
    string key;
    int A;
    float level = 1;
    int downloadsgames = 0;
    while (key != "q")
    {
    cin >> key;
    if (key == "ls" && level == 1)
    {
        cout <<"Documents \n";
        cout <<"Downloads \n";
        cout <<"readme.txt \n";
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
    if (key == "ugadaika2" && level == 1 && downloadsgames >= 1)
    {
        cout <<"Откройте файл ugadaika2.cpp"<<endl;
    }
    if (key == "ugadaika3" && level == 1 && downloadsgames >= 1)
    {
        cout <<"Откройте файл ugadaika3.cpp"<<endl;
    }
    if (key == "ugadaika4" && level == 1 && downloadsgames >= 1)
    {
        cout <<"Откройте файл ugadaika4.cpp"<<endl;
    }
    if (key == "ugadaika5" && level == 1 && downloadsgames >= 1)
    {
        cout <<"Откройте файл ugadaika5.cpp"<<endl;
    }
    if (key == "volshebnoeboloto" && level == 1 && downloadsgames >= 2)
    {
        cout <<"Откройте файл volshebnoeboloto.cpp"<<endl;
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
        if (key == "install games")
        {
            cout <<"Чтобы установить угадайку напишите 1 \n";
            cout <<"Чтобы установить угадайку и волшебное болото напишите 2 \n";
            cout <<"Чтобы установить угадайку, волшебное болото,  напишите 2 \n";
        }
    }
    }
}
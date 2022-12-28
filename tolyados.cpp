#include <iostream>
#include <cstring> 
using namespace std;
int main()
{
    string key;
    float level = 1;
    int downloadgames = 0;
    int song = 0;
    int version[4] = {0, 1, 1, 1};
    string dev = "publicalpha";
    string login = "TestUser";
    string password = "Test";
    string login2;
    string password2;
    cin >> login2 >> password2;
    if (login2 == login && password2 == password)
    {
    cout <<"Добро пожаловать в TolyaDOS v"<<version[0]<<'.'<<version[1]<<'.'<<version[2]<<'-'<<dev<<'.'<<version[3]<<endl;
    while (key != "quit")
    {
    cin >> key;
    if (key == "ls" && level == 1)
    {
        cout <<"Documents \n";
        cout <<"Downloads \n";
	cout <<"programs \n";
        cout <<"readme.txt \n";
        cout <<"Songs \n";
    }
    if (key == "Documents" && level == 1)
    {
        cout <<"Здесь пусто \n";
    }
    if (key == "Downloads" && level == 1)
    {
        cout <<"Здесь пусто \n";
    }

    if (key == "programs" && level == 1)
    {
        cout <<"ugadaika2 \n";
        cout <<"ugadaika3 \n";
        cout <<"ugadaika4 \n";
        cout <<"ugadaika5 \n";
        cout <<"volshebnoeboloto \n";
        cout <<"biletik \n";
	cout <<"math \n";
    }
    if (key == "Songs" && level == 1 && song >= 1)
    {
        cout <<"atyizobreti \n";
    }
    if (key == "atyizobreti" && song >= 1)
    {
        cout <<"А ты изобрети \n А ты изобрети \n как море переплыть \n как гору перейти \n как к звёздам полететь и там друзей найти \n никто не знает как это изобрести \n новаторы в пути!";
    }
    if (key == "ugadaika2" && level == 1)
    {
	cout <<"Загрузка \n";
        fopen("ugadaika2.cpp", "rb+");
    }
    if (key == "ugadaika3" && level == 1)
    {
        cout <<"Загрузка \n";
	fopen("ugadaika3.cpp", "rb+");
    }
    if (key == "ugadaika4" && level == 1)
    {
	cout <<"Загрузка \n";
      	fopen("ugadaika4.cpp", "rb+");
    }
    if (key == "ugadaika5" && level == 1)
    {
        cout <<"Загрузка \n";
        fopen("ugadaika5.cpp", "rb+");
    }
    if (key == "volshebnoeboloto" && level == 1)
    {
        cout <<"Загрузка \n";
        fopen("volshebnoeboloto.cpp", "rb+");
    }
    if (key == "biletik" && level == 1)
    {
        cout <<"Загрузка \n";
        fopen("biletik.cpp", "rb+");
    }
    if (key == "cdmath" && level == 1)
    {
	level = 2;
	if (key == "ls")
	{
	   cout <<"arccosinus.cpp \n";
	   cout <<"arcsinus.cpp \n";
	   cout <<"cosinus.cpp \n";
	   cout <<"sinus.cpp \n";
	   cout <<"arccosinus.cpp \n";
	   cout <<"calculator.cpp \n";
	   cout <<"koren.cpp \n";
	}
	if (key == "arccosinus")
        {
           cout <<"Загрузка \n";
	   fopen("arccosinus.cpp", "rb+");
        }
	if (key == "arcsinus")
        {
           cout <<"Загрузка \n";
           fopen("arcsinus.cpp", "rb+");
        }
	if (key == "cosinus")
        {
           cout <<"Загрузка \n";
           fopen("cosinus.cpp", "rb+");
        }
	if (key == "sinus")
        {
           cout <<"Загрузка \n";
           fopen("sinus.cpp", "rb+");
        }
	if (key == "koren")
        {
           cout <<"Загрузка \n";
           fopen("koren.cpp", "rb+");
        }
	if (key == "calculator")
        {
           cout <<"Загрузка \n";
           fopen("calculator.cpp", "rb+");
        }
	if (key == "cd..")
	{
	   level = 1;
	}
    }
    if (key == "help")
    {
        cout <<"ls - Список папок и файлов в текущей папке\n";
        cout <<"browser - открывает браузер \n";
        cout <<"internet - открывает браузер \n";
        cout <<"cd - открывает папку \n";
        cout <<"cd.. - закрывает папку \n";
	    cout <<"quit - выход из системы \n";
    }
    if (key == "installv:ir")
    {
	cout <<"На вашем компьютере вирус. \n";
	cout <<"Чтобы установить антивирус напишите installpcdestroyer:bestvirus \n";
	if (key == "installpcdestroyer:bestvirus")
	{
	  cout <<"Гудбай \n";
	  break;
	  cout <<"Подсказка: не эксперементируйте с ПК а также смотрите на название программы перевод названия антивиуса: Установить уничтожитель компьютера: лучший вирус \n";
	}
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
	    cout <<"В разработке \n";
        }
    }
    }
    }
}

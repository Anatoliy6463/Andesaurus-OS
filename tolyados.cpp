#include <iostream>
#include <cstring>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int main()
{
    string key;
    int version[3] = {1, 0, 5};
    string login = "TestUser";
    string password = "Test";
    string login2;
    string password2;
    cin >> login2 >> password2;
    if (login2 == login && password2 == password)
    {
    	cout <<"Добро пожаловать в TolyaDOS v"<<version[0]<<'.'<<version[1]<<'.'<<version[2]<<" STS\n";
    	system("bash");
	while (key != "N")
	{
    		sleep(180);
		cout <<"Вы хотите продолжить сессию? Y/N";
		cin >> key;
		if (key == "Y") system("bash");
		if (key == "N") return 0;
	}
    }
    else if (login2 == "Hacker" && password2 == "Hack")
    {
        int ip[4];
        char dot[4];
        cout <<"Какой ip-адрес вы хотите взломать?\n";
        cin >> ip[0] >> dot[0] >> ip[1] >> dot[2] >> ip[2] >> dot[3] >> ip[3];
    }
    else if (login2 == "Gamer" && password2 == "Gamer")
    {
        cout <<"В какую игру вы хотите сыграть?\n";
	cin >> key;
	if (key == "Minecraft") cout <<"Хехе\n";
    }
    else
    {
	    int k = 0;
	    while (login2 != login && password2 != password || login2 != "Hacker" && password2 != "Hack" || login2 != "Gamer" && password2 != "Gamer")
	    {
		    cout <<"Попробуйте ещё раз \n";
		    cin >> login2 >> password2;
		    k++;
		    if (k >= 3)
		    {
			    cout <<"Доступ запрещён \n";
			    break;
			    return 0;
		    }
        }
    }
}

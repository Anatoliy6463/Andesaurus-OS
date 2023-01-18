#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
    string key;
    int version[3] = {1, 0, 4};
    string login = "TestUser";
    string password = "Test";
    string login2;
    string password2;
    cin >> login2 >> password2;
    if (login2 == login && password2 == password)
    {
    cout <<"Добро пожаловать в TolyaDOS v"<<version[0]<<'.'<<version[1]<<'.'<<version[2]<<'.'<<version[3]<<endl;
    system("bash");
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
        cout <<"В разработке\n";
    }
    else
    {
	    int k = 0;
	    while (login2 != login && password2 != password)
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

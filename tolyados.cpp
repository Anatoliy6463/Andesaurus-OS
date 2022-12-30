#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
    string key;
    float level = 1;
    int downloadgames = 0;
    int song = 0;
    int version[4] = {0, 2, 0, 1};
    string dev = "publicalpha";
    string login = "TestUser";
    string password = "Test";
    string login2;
    string password2;
    cin >> login2 >> password2;
    if (login2 == login && password2 == password)
    {
    cout <<"Добро пожаловать в TolyaDOS v"<<version[0]<<'.'<<version[1]<<'.'<<version[2]<<'-'<<dev<<'.'<<version[3]<<endl;
    system("bash");
    }
    else
    {
	int k = 0;
	while (login2 != login && password2 != password)
	{
		cout <<"Попробуйте ещё раз \n";
		cin >> login2 >> password2;
		k++;
		if (k >= 5)
		{
			cout <<"Доступ запрещён \n";
			break;
			return 0;
		}
    }
    }
}

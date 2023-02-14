#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  cout <<"Чтобы установить TolyaDOS 1.0.5-2 вы должны прочитать лицензию GNU Public License 3.0 \n";
  string soglasie;
  cout <<"Вы принимаете условия лицензии? \n";
  cin >> soglasie;
  if (soglasie == "Да" || soglasie == "Yes")
  {
    cout <<"Доступ разрешён\n";
    FILE *fp;
    fp = fopen("DOS", "r+b");
    cout <<fp<<endl;
  }
  else
  {
    cout <<"Доступ запрещён\n";
  }
  return 0;
}

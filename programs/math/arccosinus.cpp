#include <cmath>
#include <iostream>
using namespace std;
int main()
{
  float number;
  cin >> number;
  float Arccosinus = acos(number);
  if (number == -1)
  {
  cout <<"3.1415926535 8979323846 2643383279 5028841971 6939937510 5820974944 5923078164 0628620899 8628034825 3421170679 8214808651 3282306647 0938446095 5058223172 5359408128 4811174502 8410270193 8521105559 6446229489 5493038196"<<endl;
  return 0;
  }
  cout <<Arccosinus<<endl;
  return 0;
}

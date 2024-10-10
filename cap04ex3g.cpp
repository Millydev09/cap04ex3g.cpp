//cap04ex3g.cpp

#include <iostream>
using namespace std;

int main (void)
{
  setlocale(LC_ALL, "Portuguese_Brazil.1252");
  int a,b,c,d,r0,r1,r2,r3,r4,r5,r6,r7;

  cout << "entre um valor para A:" << endl;
  cin >> a;

  cout << "entre um valor para B:" << endl;
  cin >> b;

  cout << "entre um valor para C:" << endl;
  cin >> c;

  cout << "entre um valor para D:" << endl;
  cin >> d;

  r0 = a%2;
  r1= b%2;
  r2= c%2;
  r3= d%2;

  r4= a%3;
  r5= b%3;
  r6= c%3;
  r7= d%3;

  cout << "Restos para divisibilidade por 2: " << r0 << ", " << r1 << ", " << r2 << ", " << r3 << endl;
  cout << "Restos para divisibilidade por 3: " << r4 << ", " << r5 << ", " << r6 << ", " << r7 << endl;

  if (r0==0 && r1==0 && r2==0 && r3==0 && r4==0 && r5==0 && r6==0 && r7==0)
  {
     cout <<" os valores fornecidos são divisiveis por 2 e 3:"<<  a << "," << b << "," << c <<"," << d ;
  }
  else
  {
      cout << "nem todos são divisiveis por 2 e 3.";
  }
  return 0;
}

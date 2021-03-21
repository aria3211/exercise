# include <iostream>

using namespace std;


int main()
{
  int fac = 1;
  int result;
  cout << "Enter a number Factoryal: ";
  cin >> result;
  for (int i = 1; i<= result; ++i )
  {
    fac = fac * i;
  }
  cout << fac;
}

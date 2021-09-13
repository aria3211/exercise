#include <iostream>

using namespace std;



void Fibo(int n);

int main()
{
  Fibo(18);

}


void Fibo(int n){
  int x=0,y=1,f;
  if (n==0){
    cout <<  0;
  }
  else if (n==1){
    cout <<  1;
  }
  cout << x <<" "<< y <<" ";
  for(int i=2;i<=n;++i)
  {
    f = x+y;
    cout << f << " ";
    x=y;
    y=f;
  }

}

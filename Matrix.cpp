# include <iostream>

using namespace std;



int main()
{
  int a[2][3] = {{-5,2,8},
                 {1,0,0}};

  int b[2][3] = {{1,0,2},
                 {0,3,-6}};

  int result[2][3];

  cout << "A:\n";
  for (int i=0; i<2; ++i){
    for (int j=0; j<3; ++j){
      cout << a[i][j] << " ";
    }cout << endl;
  }

  cout << "B\n:";
  for (int i=0; i<2; ++i){
    for (int j=0; j<3; ++j){
      cout << b[i][j]<<" ";
    }cout << '\n';
  }




  cout << "A+B:\n";
  for (int i=0; i<2; ++i){
    for (int j=0; j<3; ++j){
      result[i][j] = a[i][j] + b[i][j];
    }
  }

  for (int k= 0; k<2; ++k){
    for (int l =0; l<3; ++l){
      cout <<result[k][l] <<" ";
    }cout << endl;
    

  }



}

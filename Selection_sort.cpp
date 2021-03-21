# include <iostream>
using namespace std;





int main()
{
  int a[8] = {1,2,6,8,9,3,4,5};
  int index_arr = 0;
  cout << "Enter an integer in the list to search for: ";
  cin >> index_arr;

  for (int i = 0; i<sizeof(a)/sizeof(a[0]); ++i ){
    if (index_arr == a[i]){
      cout <<  i ;
    }

}

}

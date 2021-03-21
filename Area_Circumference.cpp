# include <iostream>

using namespace std;


int main()
{
  float main_number{};
  float count1 {0};
  float b{0};
  cout << "how many number :";
  cin >> main_number;
  for (int i = main_number; i != 0 ; i--) {
    cout << "Enter a"<<i <<'\n';
    cin >> count1;
    b += count1;

    
  }
  cout <<"The average of the "<< main_number << " is: "<<b/main_number << endl;

}

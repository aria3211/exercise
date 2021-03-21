# include <iostream>

using namespace std;


#define MAX 100

int main()
{
  int arr[MAX];
  int n,i,j;
  int temp;
  cout << "Enter a len array: " << '\n';
  cin >> n;

  // check output
  if (n<0||n>MAX)
  {
    cout << "Error valid range!!"<<'\n';
    return -1;
  }
  for (i=0;i<n;i++)
  {
    
    cout << "Enter element["<< i+1 <<"]";
    cin >> arr[i];
  }

  cout << "Unsorted Array elements: "<<endl;
  for(i=0;i<n;++i)
  {
    cout << arr[i]<<'\t';
  }
  cout << '\n';
  cout << "Sorting...."<<'\n';
  for(i=0;i<n;i++){
    for (j=i+1;j<n;j++){
      if (arr[i]>arr[j]){
        temp = arr[i];
        arr[i]=arr[j];
        arr[j] = temp;
      }
    }
  }

  for (i=0;i<n;i++){
    cout << arr[i]<<'\t';
  }cout << endl;

  return 0;


}


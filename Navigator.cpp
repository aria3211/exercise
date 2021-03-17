# include <iostream>

using namespace std;



int main()
{
  bool answer = false;
  int pos[2] = {0,0};
  int add = 1;
  char answer_2;
  bool Q = true;
  while (answer != Q)
  {
    cout << endl<<"Current Position = (0, 0)" << endl;
    cout << "Move (N)orth, (E)ast, (S)outh, (W)est (Q)uit? ";
    cin >> answer_2;

    switch (answer_2)
    {

      case 'q':
      case 'Q':
        answer = true;
        cout << "Exiting....";
      break;

      case 'N':
        pos[1] +=add;
        cout << "New coordinates:  "<<'\n';
        for (int i =0; i<2; ++i){
          cout << "( "<<pos[i]<<" )";
        }

      break;

      case 'e':
      case 'E':
        pos[0] += add;
        cout << "New coordinates:  "<<'\n';
        for (int j =0; j<2; ++j){
          cout << "( "<<pos[j]<<" )";
        }

        break;

      case 's':
      case 'S':
      pos[1] -= add;
      cout << "New coordinates:  "<<'\n';
      for (int i =0; i<2; ++i){
        cout << "( "<<pos[i]<<" )";
      }
      break;

      case 'w':
      case 'W':
      pos[0] -= add;
      cout << "New coordinates:  "<<'\n';
      for (int i =0; i<2; ++i){
        cout << "( "<<pos[i]<<" )";
      }
      break;




    }



  }
}

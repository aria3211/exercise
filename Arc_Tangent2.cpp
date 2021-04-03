#include <iostream>
#include <cmath>


#define PI 3.1415926

using namespace std;

float MyArcTangent(float y, float x);


int main()
{
    cout << MyArcTangent(4,2) << endl;
    cout << MyArcTangent(5,-1) << endl;
    cout << MyArcTangent(-4,-6) << endl;
    cout << MyArcTangent(-6,4) << endl;

}


float MyArcTangent(float y, float x)
{
    float val = 180.0/PI;
    float result = atan2(y,x)*val;
    return result;
}

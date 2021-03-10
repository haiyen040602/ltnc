#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;
    cin >> x;
    int y;
    cin >> y;
    cout << pow(x,y) << endl;
    int i=0;
    double p=1;
    while( i<y )
    {
        p *= x;
        i++;
    }
    cout << p;o
    return 0;
}

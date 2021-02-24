#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for ( int i=0; i<n; i++) cin >> a[i];
    double Sum, Max = a[0], Min=a[0];
    for (int i=0; i<n; i++)
    {
        Sum += a[i];
        if ( a[i] > Max ) Max = a[i];
        if ( a[i] < Min ) Min = a[i];
    }
    double Mean = Sum / n;
    cout << Mean << endl << Max << endl << Min;
    return 0;
}

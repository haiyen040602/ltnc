#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    double Sum = 0.0;
    for (int i=0; i<n; i++)
    {
        Sum += arr[i];
    }
    double avr = Sum /n;
    cout << "Average of Array is: " << avr << endl;

    double var = 0.0 ;
    for (int i=0; i<n; i++)
    {
        var += ( arr[i] - avr )*( arr[i] - avr );
    }
    var = var/n;
    cout << "Variance of Array is: " << var << endl;
    return 0;
}

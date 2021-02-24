#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) cin >> a[i];
    int tmp ;
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if ( a[i] == a[j] )
            {
                cout << "Yes";
                return 0;
            }
        }
        if ( i==n-1 ) cout << "No";
    }
    return 0;
}

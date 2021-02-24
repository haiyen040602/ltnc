#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i=n; i>0; i--)
    {
    	cout  << setw(n-i+1);
        for (int j=1; j<=i; j++)
            cout << "*";
        cout << endl;

    }
    return 0;
}

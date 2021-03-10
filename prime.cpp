#include <iostream>
#include <cmath>
using namespace std;
bool check_prime(int x)
{
    if (x < 2 ) return 0;
    for (int i=2; i<=sqrt(x); i++)
    {
        if ( x%i==0 ) return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    if ( check_prime (n) ) cout << "yes";
    else cout << "no";
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int n;
    int temp = 0;
    do
    {
        temp = n;
        cin >> n;
        if ( n == temp ) continue;
        else
        cout << n << ' ' ;
    }
    while ( n > 0);
    return 0;
}

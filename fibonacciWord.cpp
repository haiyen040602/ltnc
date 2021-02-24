#include <iostream>
using namespace std;
int main()
{
    string fib0= "a";
    string fib1= "b";
    cout << fib0 << ' ' << fib1 << ' ';
    int i=0;
    while ( i < 10 )
    {
        string fib2= fib1+fib0;
        cout << fib2 << ' ';
        fib0 = fib1;
        fib1 = fib2;
        i++;
    }
    return 0;
}

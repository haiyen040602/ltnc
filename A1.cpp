#include <iostream>
using namespace std;
int * weird_sum ( int a, int b)
{
    int c;
    c = a+b;
    return &c;
}

int main()
{
    int a = 5, b =7;
    cout << weird_sum(a,b);
    return 0;
}

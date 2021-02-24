#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << boolalpha << ( n%4==0 && n%100!=0);
    return 0;
}

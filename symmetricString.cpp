#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int  len = s.length();
    int tmp;
    for (int i=0; i<len; i++)
    {
        if ( s[i] == s[--len] ) tmp =1;
        else
        {
            cout << "NO";
            return 0;
        }
    }
    if ( tmp == 1 ) cout << "YES";
    return 0;
}

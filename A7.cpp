#include <iostream>
#include <cstring>
using namespace std;
int main( int argc, char* argv[] )
{
    char a[100] , b[100];
    cin >> a >> b;
    int count =0;
    cout << strcmp(a,b); // strncmp (a, b, n) compare up to n characters of string a to those of string b
    do
    {
        int tmp = strcmp(a,b);

        if ( tmp > 0 )
        {
            char *str = &b;
            str = strstr( b, b[0] );
    }
    while (tmp !=0);
    return 0;
}

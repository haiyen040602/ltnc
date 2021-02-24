#include <iostream>
using namespace std;

int ** enterInput(int tests, const int col );
string changeIntToString( int num );
bool checkSymmetricNumbers( string input );

int main()
{
    int tests;
    cin >> tests;
    const int col = 2;
    int **input = enterInput(tests, col );
    int tmp[tests] = {0};
    for (int i=0; i<tests; i++)
    {
        for (int j=input[i][0]; j<=input[i][1]; j++)
        {
            string str = changeIntToString(j);
            if ( checkSymmetricNumbers(str) && j > 9)
            {
                tmp[i]++;
            }
        }
    }
    for (int i=0; i<tests; i++) cout << tmp[i] << ' ';
    return 0;
}

int ** enterInput(int tests, const int col )
{
    int **input = new int* [tests];
    for (int i=0; i<tests; i++)
    {
        input[i] = new int [col];
        for (int j=0; j<col; j++)
            cin >> input[i][j];
    }
    return input;
}

string changeIntToString( int num )
{
    string str;
    while (num !=0 )
    {
        str = char ( (num % 10) + 48 ) + str;
        num /= 10;
    }
    return str;
}

bool checkSymmetricNumbers( string input )
{
    int len = input.length();
    for (int i=0; i<len; i++)
    {
        if (input[i] != input[len -1] ) return false;
        else len --;
    }
    return true;
}

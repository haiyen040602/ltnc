#include <iostream>
using namespace std;

char ** createMap ( int row, int col ); //default: "*" - have bom / "." - not bom
void  countBom ( char ** mapBom, int row, int col );

int main()
{
    int row, col;
    cin >> row >> col;
    char ** mapBom = createMap( row, col );
    countBom (mapBom, row, col);

    return 0;
}

char ** createMap ( int row, int col ) //default: "*" - have bom / "." - not bom
{
    char ** mapBom = new char *[row];
    for (int i=0; i<row; i++)
    {
        mapBom[i] = new char [col];
        for (int j=0; j < col; j++)  cin >> mapBom[i][j];
    }
    return mapBom;
}

void  countBom ( char ** mapBom, int row, int col )
{
    int arr[row][col] ;
    for ( int i=0; i<row; i++ )
    {
        for (int j=0; j<col; j++)
        {
            if ( mapBom [i][j] == '.' )
            {
                arr [i][j] =0;
                for (int k=i-1; k<=i+1; k++)
                {
                    for (int l=j-1; l<=j+1; l++)
                    {
                        if ( k < 0  || l < 0 || k == row || l == col ) continue;

                        else if (mapBom[k][l] == '*' )
                        {
                            arr[i][j]++;

                        }
                    }
                }
                mapBom[i][j] = arr[i][j] + 48;

            }


        }
    }
    for (int i=0; i<row; i++)
        {
            for (int j=0; j<col; j++) cout << mapBom[i][j] << ' ';
            cout << endl;
        }
}

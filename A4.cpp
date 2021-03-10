#include <iostream>
using namespace std;

int binarySearch (int *, int ,int );


int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i=0; i<n; i++) cin >> A[i];
    int key;
    cout << "Enter a key : " ; cin >> key;

    if ( binarySearch(A,n,key) == 0 ) cout << "Key is not in array!!";
    else cout << " Position of key in array is: " << binarySearch(A,n,key)+1 ;

    return 0;
}

int binarySearch ( int *A, int n, int key )
{
    int low=0, high=n, middle, pos = 0;
     while (high > low)
    {
        middle = (low+high)/2;
        if ( *(A+middle) > key ) high = middle - 1;
        else if ( *(A+middle) < key ) low = middle + 1;
        else
        {
            pos = middle +1;
            break;
        }
    }
    return pos;
}

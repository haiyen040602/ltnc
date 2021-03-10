#include <iostream>
using namespace std;

int count_even( int *, int );

int main()
{
    int n = 10;
    int A[n];
    for (int i =0; i<n; i++) cin >> A[i];
    cout << count_even(A,n);
    return 0;
}

int count_even( int *A, int n )
{
    int even = 0;
    for (int i =0; i<n; i++)
    {
        if (*(A+i) % 2 == 0) even++;
    }
    return even;
}

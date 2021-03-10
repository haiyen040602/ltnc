#include <iostream>
using namespace std;

int func( int*X )
{
    int Size;
    Size = sizeof(X);
    return Size;
}

int main()
{
    int n = 8;
    int A[n];
    int m;
    int B[m];
    cout << sizeof(A) << endl;
    cout << func(A) << endl;
    cout << func(B) << endl;
    return 0;
}
/** sizeof bên ngoài hàm sẽ cho ra tổng số byte của mảng A
sizeof bên trong hàm func cho kết quả là số phần tử của mảng A

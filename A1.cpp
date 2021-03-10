#include <iostream>
using namespace std;

int main()
{
    int x,y;
    int a[3];
    char b[3];
    char m,n;
    cout << &x << ' ' << &y << endl;
    for (int i=0; i<3; i++) cout << &a[i] << ' ';
    cout << endl;
    for (int i=0; i<3; i++) cout << (void*)&b[i] << ' ';
    cout << endl;
    cout << (void*)&m << ' ' << (void*)&n<< endl;
    cout << (uintptr_t)&x << endl; // in địa chỉ dạng thập phân
    return 0;
    /** địa chỉ ô nhớ được định dạng theo hệ cơ số 16
    kiểu int: mỗi biến cần 4 ô nhớ (32 bit) nên các ô địa chỉ của mảng int cách nhau 4 ô
    kiểu char: mỗi biến cần 1 ô nhớ (8 bit) nên các ô địa chỉ của mảng char cách nhau 1 ô**/
}

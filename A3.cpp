#include <iostream>
using namespace std;

void func1( int x)
{
    cout << "Address of Parameter is " << &x << endl; // tham so - tham tri
}

void func2( int &x )
{
    cout << "Address of Parameter is " << &x << endl; // tham so - tham bien
}
int main()
{
    int x =5;
    cout << "Address of Argument is " << &x << endl; // doi so
    func1(x);
    func2(x);
    return 0;

}
 /**
 đối số và tham trị là hai biến có địa chỉ khác nhau vì tham trị là bản sao
 của đối số, thay đổi ko làm ảnh hưởng đến đối số
 đối số và tham biến có cùng 1 địa chỉ vì chúng là một biến với tên gọi khác nhau,
 & giúp hàm chiếu tới địa chỉ của đối số

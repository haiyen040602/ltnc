#include <iostream>
using namespace std;
long factorial (int x)
{
    cout << "x=" << x << " at " << &x << endl;
    if ( x == 1 ) return 1;
    return x*factorial(x-1);

}

int main()
{
    int x;
    cin >> x;
    cout << "x=" << x << " at " << &x << endl;
    cout << factorial(x) << endl;
    return 0;
    /** các giá trị được in ra màn hình với x giảm dần và có địa chỉ khác nhau
        và khác địa chỉ biến trong ham main
        trong hàm main()-đáy stack-có gọi hàm factorial(x)
        trong hàm factorial(x) gọi tiếp hàm factorial(x-1), tạo thành vòng lặp
        gọi tiếp hàm factorial cho đến khi x=1
        mỗi hàm factorial() được gọi sẽ cho giá trị x khác nhau và địa chỉ khác nhau
        khi hàm factorial() return 1 thì sẽ đấy các frame của hàm ra khỏi stack, trả về giá trị trong main()
        **/
}

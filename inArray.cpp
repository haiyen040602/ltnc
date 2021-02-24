#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) cin >> a[i];
    int Max=a[0], Min=a[0];
    int SumOfEvenNum=0, AmountOfOddNum=0;
    for (int i=0; i<n; i++)
    {
        if ( a[i] > Max ) Max = a[i];
        if ( a[i] < Min ) Min = a[i];
        if ( a[i] % 2 == 0 ) SumOfEvenNum +=a[i];
        if ( a[i] % 2 != 0 ) AmountOfOddNum ++;
    }
    cout << "Max of Array is: " << Max << endl;
    cout << "Min of Array is: " << Min << endl;
    cout << "Sum of Even Numbers of Array is: " << SumOfEvenNum << endl;
    cout << "Amount of Odd Numbers of Array is: " << AmountOfOddNum << endl;
    return 0;
}

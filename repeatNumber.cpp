#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int tmp[10] = {0};
    for (int i=0; i<n; i++)
    {
        tmp[arr[i]] ++;
    }
    cout << "The Number of Each Number is: " << endl;
    for (int i=0; i<10; i++)
        if ( tmp[i] != 0 ) cout << i << ' ' << tmp[i] << endl;

    return 0;
}

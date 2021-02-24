#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int tmp=0;
	for (int i=2*n+1; i>0; i-=2)
	{
		cout << setw(tmp+1);
		for (int j=1; j<=i; j++) cout << "*";
		cout << endl;
		tmp++;
	}
	return 0;
}

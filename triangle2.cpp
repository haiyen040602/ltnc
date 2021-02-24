#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n ;
	cin >> n;
	int k=0;
	for (int i=1;  i <= (2*n+1) ; i+=2)
	{
		cout << setw(n-k+1);
		for (int j=1; j<= i; j++) cout << "*";
		cout << endl;
		k++;
	}
	return 0;
	
}

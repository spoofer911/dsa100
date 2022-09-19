/* Print a following pattern */
/* 1 */
/* 1 2 */
/* 1 2 3 */
/* 1 2 3 4 */
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int n,k;
	cout << "Enter a number : ";
	cin >> n;
	for(int i=0;i<n;i++)
	{
		k=1;
		for(int j=0;j<=i;j++)
		{
			cout << k << " ";
			k++;
		}
		cout << endl;
	}
	return 0;
}

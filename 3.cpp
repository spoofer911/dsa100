/* WAP to find a Factor of a given number (iterative and recursive) */
#include <iostream>
using namespace std;
void factor(int n, int i=1)
{
	if(i>n)
	{
		cout << endl;
		return;
	}
	if(n%i==0)
		cout << i << " ";
	factor(n,i+1);
	return;
}
int main(int argc, char *argv[])
{
	int n;
	cout << "Enter a number : " ;
	cin >> n;
	/* iterative */	
	cout << "Iteratively factors are : ";
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
			cout << i << " ";
	}
	cout << endl;
	/* recursively */
	cout << "Recursively factors are : ";
	factor(n);
	return 0;
}

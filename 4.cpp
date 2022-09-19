/* WAP to find a factorial of a given integer (iterative and recursive) */ 
#include <iostream>
using namespace std;
int factorial(int n)
{
	if(n==0)
		return 1;
	return n*factorial(n-1);
}
int main(int argc, char *argv[])
{
	int n,fact=1;
	cout << "Enter a number : ";
	cin >> n;
	/* iteratively */
	for(int i=n;i>0;i--)
	{
		fact=fact*i;
	}
	cout << "Iteratively factorial is : " << fact << endl;
	/* recursively */
	fact=factorial(n);
	cout << "Recursively factorial is : " << fact << endl;
	return 0;
}

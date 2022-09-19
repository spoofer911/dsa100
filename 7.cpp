/* WAP to find a Fibonacci series up to n terms (n is entered by user) (iterative and recursive) */ 
#include <iostream>
using namespace std;
int fib(int n)
{
	if(n==1)
		return 0;
	if(n==2)
		return 1;
	int a = fib(n-1) + fib(n-2);
	return a;
}
int main(int argc, char *argv[])
{
	/* iteratively */
	int n,a=0,b=1,temp=0;
	cout << "Enter the term : ";
	cin >> n;
	cout << "Iteratively fibonacci sereis is : ";
	for(int i=1;i<=n;i++)
	{
		if(i==1)
			cout << a << " ";
		else if(i==2)
			cout << b << " ";
		else
		{
			temp=b;
			b=b+a;
			a=temp;
			cout << b << " ";
		}
	}
	cout << "\n";
	/* recursively */
	cout << "Recursively fibonacci sereis is : ";
	for(int i=1;i<=n;i++)
	{
		cout << fib(i) << " ";
	}
	return 0;
}

/* WAP to find a prime number between range (range should be entered by user) */
#include <iostream>
using namespace std;
bool prime(int n)
{
	bool flag=true;
	for(int i=2;i<n/2;i++)
	{
		if(n%i==0)
			flag = false;
	}
	return flag;
}
int main(int argc, char *argv[])
{
	int a,b;
	cout << "Enter the minimum number for range : ";
	cin >> a;
	cout << "Enter the maximum number for range : ";
	cin >> b;
	cout << "Following numbers are prime numbers : ";
	for(int i=a;i<=b;i++)
	{
		if(prime(i))
		{
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}

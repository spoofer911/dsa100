/* WAP to find a summation of a digit of a given number. (Iterative and recursive) */
#include <iostream>
using namespace std;
int sum_of_digits(int n)
{
	if(n==0)
		return 0;
	return ((n%10)+sum_of_digits(n/10));
}
int main(int argc, char *argv[])
{
	int n,sum=0;
	cout << "Enter a number : ";
	cin >> n;
	/* iteratively */
	for(int i=n;i>0;i/=10)
	{
		sum+=i%10;	
	}
	cout << "Iteratively sum of digits are : " << sum << endl;
	/* recursively */
	sum=sum_of_digits(n);
	cout << "Recursively sum of digits are : " << sum << endl;
	return 0;
}

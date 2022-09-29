/* WAP to find Max, Min, Average of n numbers, n should be taken from user and all n value should be taken from user (Note that you are not allowed to use an array for this) */
#include <iostream>
#include <limits.h>
using namespace std;
int main(int argc, char *argv[])
{
	int n,x,min=INT_MAX,max=INT_MIN,avg=0;
	cout << "Enter the number of elements to enter : ";
	cin >> n;
	cout << "Enter the elements : " << endl;
	for(int i=0;i<n;i++)
	{
		cin >> x;
		if(min>x)
			min=x;
		if(max<x)
			max=x;
		avg+=x;
	}
	avg/=n;
	cout << "Minimum is : " << min << " Maximum is : " << max << " Average is : " << avg << endl;
	return 0;
}

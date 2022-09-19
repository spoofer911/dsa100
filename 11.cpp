/* WAP to find weather given number is Armstrong number is not. */
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[])
{
	int n,sum=0,len=0;
	cout << "Enter a number : ";
	cin >> n;
	string str = to_string(n);
	len=str.length();
	for(int i=n;i>0;i/=10)
	{
		sum+=pow(i%10,len);
	}
	if(n==sum)
		cout << "Number is Armstrong number" << endl;
	else
		cout << "Number is not Armstrong number" << endl;
	return 0;
}

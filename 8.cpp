/* WAP to find a total odd and total even digit of a given number. */
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int n,odd=0,even=0;
	bool flag=false;
	cout << "Enter a number : " << endl;
	cin >> n;
	for(int i=n;i>0;i/=10)
	{
		if(flag)
		{
			even+=i%10;
			flag=false;
		}
		else
		{
			odd+=i%10;
			flag=true;
		}
	}
	cout << "Sum of even digits are : " << even << endl;
	cout << "Sum of odd digits are : " << odd << endl;
	return 0;
}

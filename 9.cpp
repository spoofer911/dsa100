/* WAP to find whether a number is Odd or Even without using a % operator */
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int n;
	cout << "Enter a number : ";
	cin >> n;
	if(n-(2*(n/2))==0)
		cout << "Number is Even." << endl;
	else
		cout << "Number is odd" << endl;
	return 0;
}

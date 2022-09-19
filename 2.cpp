/* WAP to find whether string is palindrome or not. */
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	string str;
	cout << "Enter the string : ";
	cin >> str;
	int i=0,j=str.length()-1;
	bool flag=true;
	while(i<j)
	{
		if(str[i] != str[j])
			flag=false;	
		i++;
		j--;
	}
	if(flag)
		cout << "String is palindrome" << endl;
	else
		cout << "String is not palindrome" << endl;
	return 0;
}

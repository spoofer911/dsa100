/* WAP to find a sum of even number into 1D array. */
#include <iostream>
int main(int argc, char *argv[])
{
	int n,sum=0;
	std::cout << "Enter the size of array : ";
	std::cin >> n;
	int arr[n];
	std::cout << "Enter the elements of array : " ;
	for(int i=0;i<n;i++)
	{
		std::cin >> arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2 == 0)
		{
			sum+=arr[i];
		}
	}
	std::cout << "The sum of even elements are : " << sum << std::endl;
	return 0;
}

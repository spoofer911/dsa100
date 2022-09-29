/* WAP to sort an Array using insertion sort. */
#include <iostream>
using namespace std;
void insertion_sort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i; j > 0; j--) {
      if (arr[j] < arr[j - 1])
        swap(arr[j], arr[j - 1]);
    }
  }
  return;
}
int main(int argc, char *argv[]) {
  int n;
  cout << "Enter the size of array : ";
  cin >> n;
  cout << "Enter the elements of array" << endl;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  insertion_sort(arr, n);
  cout << "Sorted array is : " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}

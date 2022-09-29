/* WAP to sort an Array using Bubble sort. */
#include <iostream>
using namespace std;
void bubble_sort(int arr[], int n) {
  bool flag = true;
  for (int i = 0; i < n; i++) {
    flag = true;
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        flag = false;
      }
    }
    if (flag)
      return;
  }
}
int main(int argc, char *argv[]) {
  int n;
  cout << "Enter the size of array : ";
  cin >> n;
  int arr[n];
  cout << "Enter the elements of array : " << endl;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  bubble_sort(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}

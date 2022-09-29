/* WAP to sort an Array using Selection sort. */
#include <climits>
#include <iostream>
using namespace std;
void selection_sort(int arr[], int n) {
  int min = INT_MAX, minj;
  for (int i = 0; i < n; i++) {
    min = INT_MAX;
    for (int j = i; j < n; j++) {
      if (arr[j] < min) {
        min = arr[j];
        minj = j;
      }
    }
    swap(arr[i], arr[minj]);
  }
  return;
}
int main(int argc, char *argv[]) {
  int n;
  cout << "Enter the size of array : ";
  cin >> n;
  cout << "Enter the elements of array : " << endl;
  int arr[n], min = INT_MAX, minj;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  selection_sort(arr, n);
  cout << "Sorted array is " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}

#include <climits>
#include <iostream>
using namespace std;
/* counting sort for digits */
void count_sort(int arr[], int n, int div) {
  int output[n], count[10] = {0};
  /* entering occurences in count */
  for (int i = 0; i < n; i++) {
    count[(arr[i] / div) % 10]++;
  }
  /* incrementing for putting value by index in output */
  for (int i = 1; i < 10; i++) {
    count[i] += count[i - 1];
  }
  /* putting values in output */
  for (int i = n - 1; i >= 0; i--) {
    output[(count[(arr[i] / div) % 10]) - 1] = arr[i];
    count[(arr[i] / div) % 10]--;
  }
  /* copying output in input arr */
  for (int i = 0; i < n; i++) {
    arr[i] = output[i];
  }
}
void radix_sort(int arr[], int n) {
  int max = INT_MIN;
  /* finding maximum */
  for (int i = 0; i < n; i++) {
    max = arr[i] > max ? arr[i] : max;
  }
  /* counting sort on every digit and sorting it accordingly */
  for (int i = 1; n / i > 0; i *= 10) {
    count_sort(arr, n, i);
  }
}
int main(int argc, char *argv[]) {
  int n;
  cout << "Enter the size of array : ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  radix_sort(arr, n);
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}

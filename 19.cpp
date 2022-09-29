#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;
void bucket_sort(int arr[], int n) {
  int min = INT_MAX, max = INT_MIN;
  for (int i = 0; i < n; i++) {
    max = arr[i] > max ? arr[i] : max;
    min = arr[i] < min ? arr[i] : min;
  }
  int range = max - min;
  vector<int> bucket[range];
  for (int i = 0; i < n; i++) {
    bucket[(arr[i] - min) / range].push_back(arr[i]);
  }
}
int main(int argc, char *argv[]) {
  int n;
  cout << "Enter the size of array : ";
  cin >> n;
  int arr[n];
  cout << "Enter the elements of array" << endl;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  bucket_sort(arr, n);
  return 0;
}

// Finding the minium sum of multiplication from two arrays
#include <bits/stdc++.h>
using namespace std;
int main() {
  int arr1[] = {4, 2};
  int arr2[] = {2, 3};
  int size = sizeof(arr1) / sizeof(arr1[0]);
  sort(arr1, arr1 + size);
  sort(arr2, arr2 + size);
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr1[i] * arr2[size - i - 1];
  }
  cout << sum;
  return 0;
}
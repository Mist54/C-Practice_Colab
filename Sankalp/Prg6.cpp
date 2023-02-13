// Swapping two element and positions
#include <bits/stdc++.h>
using namespace std;
int main() {
  int num1 = 6, num2 = 4, temp = 0;
  int arr[] = {1, 3, 5, 6, 4, 7, 9};
  int size = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < size; i++) {
    if (arr[num2 - 1] == num1) {
      arr[num2 - 1] = num2;
      arr[num1 - 1] = num1;
    }
    cout << arr[i];
  }
  return 0;
}
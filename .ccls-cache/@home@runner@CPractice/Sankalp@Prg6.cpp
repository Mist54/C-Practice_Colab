// Swapping two element and positions
#include <bits/stdc++.h>
using namespace std;
int main() {
  int num1 = 6, pos = 4, temp = 0;
  int arr[] = {1,2,3,6,5,4,7};
  int size = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < size; i++) {
    if (arr[pos - 1] == num1) {
      arr[pos - 1] = pos;
      arr[num1 - 1] = num1;
    }
    cout << arr[i];
  }
  return 0;
}
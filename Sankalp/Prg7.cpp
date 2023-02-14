// To get Longest string from an array
#include <bits/stdc++.h>
using namespace std;
int main() {
  string arr[] = {"a", "ab", "abcdf", "abcd"};
  int len = sizeof(arr) / sizeof(arr[0]);
  int max = 0, ans = 0;
  for (int i = 0; i < len; i++) {
    if (max <= arr[i].length()) {
      max = arr[i].length();
      ans = i;
    }
  }
  cout << arr[ans];

  return 0;
}

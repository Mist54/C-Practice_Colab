// Remove Spaces from the string
#include <algorithm>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
  string str = "Sankalp M shet";
  int n = 0, size = 0;
  int len = str.length();
  string s[len];
  cout << len << "\n";
  for (int i = 0; i < len; i++) {
    if (str[i] != ' ') {
      s[n] = str[i];
      n++;
    }
  }
  for (int i = 0; i < len; i++) {
    cout << s[i];
  }
  // To find Length of the string
  for (int x : str) {
    size = size + 1;
  }
  cout << "\n";
  cout << size;
  return 0;
}
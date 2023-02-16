// Series of Ap(Arthmatic progression)
#include <bits/stdc++.h>
using namespace std;
int main() {
  int FirstTerm = 1, CommenDiff = 4, n = 109, temp = 0;
  for (int i = 0; i < n - 1; i++) {
    temp = FirstTerm + CommenDiff;
    FirstTerm = temp;
  }
  cout << "\n";
  cout << "The nth Term in series is :" << temp << "\n";
  return 0;
}
// To convert lower and uppercase
#include <algorithm>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
  string org1 = "SANkALp", org2 = "rAksHa", upper, lower;
  int len1 = 0, len2 = 0;
  // len1=org1.length(); --BuiltIn Functions
  // len2=org2.length();
  for (int x : org1) {
    len1 += 1;
  }
  for (int x : org2) {
    len2 += 1;
  }
  cout << len1 << "\n";
  cout << len2 << "\n";
  for (int i = 0; i < len1; i++) {
    upper[i] = tolower(org1[i]);
  }
  for (int i = 0; i < len2; i++) {
    lower[i] = toupper(org2[i]);
  }
  for (int i = 0; i < len1; i++) {
    cout << upper[i];
  }
  cout << "\n";
  for (int i = 0; i < len2; i++) {
    cout << lower[i];
  }

  return 0;
}

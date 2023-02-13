// Checkng the smaller elements in array
#include <bits/stdc++.h>
using namespace std;
int main() {
  int num = 6,n=0;;
  int arr[] = {2, 5, 4, 7, 8, 3, 11, 10, 5, 6};
  int size = sizeof(arr) / sizeof(arr[0]);
  sort(arr, arr + size);
  for (int i = 0; i < size; i++) {
    if(arr[i] <= num) { cout << arr[i]; }
  }
  cout<<"\n";
  //getting the length of array manually
  for(auto x : arr){ n++; }
  cout<<n;
  return 0;
}

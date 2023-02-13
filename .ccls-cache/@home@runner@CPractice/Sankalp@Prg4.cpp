// Value equal to index value
#include <bits/stdc++.h>
using namespace std;
int main() {
  int arr[] = {1, 2, 3, 5, 4};
  int size = sizeof(arr) / sizeof(arr[0]);
  int index=0;
  for (int i = 0; i < size; i++){
      index++;
      if(arr[i]==index){
          cout<<arr[i];
      }
  }
}
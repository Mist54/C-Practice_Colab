//Printing alternate elements in array
#include <bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={1,2,3,4,5,6,7,8,9,10};
  int size=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<size-1;i++){
      i=i+1;
      cout<<arr[i]<<"\t";
  }
  cout<<"\n";
  for(int i=-1;i<size-1;i++){
      i=i+1;
      cout<<arr[i]<<"\t";
  }
  return 0;
}
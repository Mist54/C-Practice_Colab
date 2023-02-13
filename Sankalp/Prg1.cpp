//Program to find sum of series 
#include <bits/stdc++.h>
using namespace std;
int main(){
  int num=100,sum=0;
  while(num>0){
    sum=sum+num;
    num--;
  }
  cout<<sum;
  
  return 0;
}
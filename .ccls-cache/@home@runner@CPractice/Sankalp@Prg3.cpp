//Finding the median
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={42,7,17,14,7,24,15,29};
    int size=sizeof(arr)/sizeof(arr[0]);
    int temp,a=0,b=0,c=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"\n";
    if(size%2==0){
        a=(size/2)-1;
        b=(size/2);
        c=(arr[a]+arr[b])/2;
        cout<<c;   
    }
    else{
        a=size/2;
        cout<<arr[a];
    }

  return 0;
}
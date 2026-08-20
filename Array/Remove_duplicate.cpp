#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array :";
    cin>>n;

   int arr[n];
   cout<<"Enter array elements :";
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   
   for(int i=0;i<n;i++){
       bool duplicate=false;
    for(int j=0;j<n;j++){
        if(j==i){
             continue;
        }
        if(arr[i]==arr[j]){
             duplicate=true;
             break;
        }
    }
    if(!duplicate){
        cout<<arr[i]<<" ";
    }
   }
   return 0;
}
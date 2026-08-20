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
   int j=0;
   //nonzero element
   for(int i=0;i<n;i++){
      if(arr[i]!=0){
        arr[j]=arr[i];
        j++;
      }
   }
   //zero element
   while(j<n){
      arr[j]=0;
      j++;
   }
   for(int i=0;i<n;i++){
       cout<<arr[i] << " ";
   }
  
   return 0;
}
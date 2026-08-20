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
       int count=0;
       for(int j=0;j<n;j++){
        
        if(arr[i]==arr[j]){
            count++;
        }
       }
       cout<<arr[i]<<" = "<<count<<endl;
   }
   return 0;

}
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
   bool duplicate=false;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
             duplicate=true;
             break;
        }
    }
   }
   if(duplicate){
    cout<<"Duplicate exist";
   }
   else{
    cout<<"Duplicate not exist";
   }
   return 0;
}
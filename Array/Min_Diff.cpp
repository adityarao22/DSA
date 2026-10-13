#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key element to find the minimum difference :";
    cin>>key;

    int start=0;
    int end=n-1;
    sort(arr,arr+n);
     int min_diff;
    bool found=false;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            found=true;
            break;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        
    }
    if(found){
        min_diff=0;
    }
    else{
     if(end>=0) 
     {
        min_diff=min(min_diff, abs(key-arr[end]));
     }
    if(start<n){
         min_diff=min(min_diff, abs(arr[start]-key));   
         }
    }
    cout<<min_diff;
    return 0;
}
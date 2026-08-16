#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
    //for iteration of i
    for(int i=0;i<n-1;i++){
        //for pass ---> in every pass the largest number should in the last position
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                  swap(arr[j],arr[j+1]);
            }
        }
      
    }
}

int main(){
    int n,i;
    cin>>n;
    int arr[n];
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    bubble_sort(arr,n);
    cout<<"Sorted array"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the arr size :";
    cin>>n;
    int arr[n];
    cout<<"Enter array element :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    while(j<n){
        arr[j]=0;
        j++;
    }
    cout<<"Array :";
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}
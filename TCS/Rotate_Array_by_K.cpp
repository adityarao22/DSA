#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int start,int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int n;
    cout<<"Enter the arr size :";
    cin>>n;
    int arr[n];
    cout<<"Enter array element :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter K :";
    cin>>k;
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);

    cout<<"Rotated array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
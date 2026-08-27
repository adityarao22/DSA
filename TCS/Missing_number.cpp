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
     n=n+1; 
    int expected_sum=(n*(n+1))/2;
    int actual_sum=0;
    for( int i:arr){
        actual_sum +=i;
    }
    cout<<"Missing number : "<<expected_sum-actual_sum;
}
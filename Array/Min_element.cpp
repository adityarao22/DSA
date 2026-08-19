#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size :";
    cin>>n;
    int arr[n];
    
    cout<<"Enter array element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
           min=arr[i];
        }
    }
    cout<<min <<" is the min element of array";
    return 0;
}
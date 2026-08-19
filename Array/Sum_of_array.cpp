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
    int sum =0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"Sum of array element :"<<sum;
    return 0;
}
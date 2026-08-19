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
    int zero=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zero++;
        }
    }
    cout<<"Zero count :"<<zero;

    return 0;
}
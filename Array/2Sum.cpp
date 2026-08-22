#include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Array size :";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array element :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool found =false;
    int target;
    cout<<"Enter target element :";
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<" + "<<arr[j]<< " = "<<target;
                found=true;
            }
        }
    }
    if(!found){
        cout<<"No pair found";
    }
    return 0;
}
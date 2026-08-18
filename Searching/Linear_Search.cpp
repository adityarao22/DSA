#include<bits/stdc++.h>
using namespace std;

int Linear_search(int arr[],int n,int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i;   // found — return the index
        }
    }
    return -1;   // not found
}

int main(){
    int n,i;
    cin>>n;
    int arr[n];
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
     int key;
    cout << "Enter the number to search: ";
    cin >> key;

    int result = Linear_search(arr,n,key);
    if(result!=-1){
        cout<<"Number found at index : "<<result;
    }
    else{
        cout<<"Number not found";
    }
    return 0;
}
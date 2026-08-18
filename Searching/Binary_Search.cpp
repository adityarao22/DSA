#include<bits/stdc++.h>
using namespace std;

int Binary_search(int arr[],int n,int key){
    int low=0;
    int high=n-1;

    //int mid=low+(high-low)/2;

    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
    }
    return -1;
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

    int result = Binary_search(arr,n,key);
    if(result!=-1){
        cout<<"Number found at index : "<<result;
    }
    else{
        cout<<"Number not found";
    }
    return 0;
}
#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n){

}

int main(){
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
    
    insertion_sort(arr,n);

    for(i=0;i<n;i++){
        cout<<arr[i];
    }
}
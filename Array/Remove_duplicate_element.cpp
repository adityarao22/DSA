#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of array :"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array elements :"<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            i++;
            arr[i]=arr[j];
        }
    }
    

    return 0;
}
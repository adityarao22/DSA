#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter the size of array :";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array element :";
    for(i=0;i<n;i++){
         cin>>arr[i];
    }
    int count=1;
    int longest=1;
    sort(arr.begin(),arr.end());
    for(i=0;i<n;i++){
        if(arr[i]==arr[i-1]+1){
            count++;
        }
        else if(arr[i]!=arr[i-1]+1){
            count=1;
        }
        longest=max(longest,count);

    }
    cout<<"Longest consecutive number :"<<longest;
    return 0;
}
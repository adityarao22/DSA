/*Agr koi v element n/2 se jayda aa rha ho to print kro us element ko
arr=[2,2,1,1,2,2,2]
if n=7
n/2=3
2 --> 5 times >n/2
then print 2
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Array size :";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array element :";
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    bool found=false;
    for( i=0;i<n;i++){
        int count=0;
        for( j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>n/2){
        cout<<arr[i]<<" is the majority element";
        found=true;
        break;
    }
    }
    
    if(!found){
        cout<<"No majority element found";
    }
    return 0;
}
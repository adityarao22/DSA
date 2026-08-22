/*
Array = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
Maximum subarray = [4, -1, 2, 1]
Sum = 6
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
int sum=0;
int maxSum=arr[0];
for(int i=0;i<n;i++){
    sum=sum+arr[i];
    maxSum=max(maxSum,sum);

    if(sum<0){
        sum=0;
    }
}
cout<<"Max sum of array is :"<<maxSum;
return 0;
}
/*
Array size :7
Enter array element :-2
1
-3
4
-1
2
1
Max sum of array is :6*/

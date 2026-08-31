#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int temp=n;
    int sum=0;
    while(n>0){
        int digits=n%10;
        sum= sum+(digits*digits*digits);
        n=n/10;

    }
    if(temp==sum){
        cout<<"Number is armstrong";
    }
    else{
        cout<<"Number is not armstrong";
    }
    return 0;
    
}
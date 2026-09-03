#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int sum=0;
    for(int i=1;i<n-1;i++){
          if(n%i==0){
            sum +=i;
          }
    }
    if(sum==n){
        cout<<"Perfect number";
    }
    else{
        cout<<"Not a perfect number";
    }
    return 0;
}
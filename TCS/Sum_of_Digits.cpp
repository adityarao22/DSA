#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    
    while(n>=10){
        int sum=0;
    while(n>0){
        int digit=n%10;
        sum =sum+digit;
        n=n/10;
    }
   n=sum;
}
 cout<<"Sum of digits : "<<n;
    return 0;
}
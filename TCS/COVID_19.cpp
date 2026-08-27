#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cout<<"Enter test case :";
    cin>>t;
    while(t--){
        cout<<"Enter number of people in the room :";
        cin>>n;
        cout<<"Number of Handshake : "<<(n*(n-1))/2<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the number of rows :";
    cin>>n;
    for(i=0;i<=n;i++){
        for(int j=0;j<i;j++){
        cout<<" * ";
        }
         cout<<endl;
    }
         
          return 0;
}

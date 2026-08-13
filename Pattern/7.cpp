#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
  
    for(i=0;i<=2*n-1;i++){
      int stars=i;
      if(i>=n){
        stars=2*n-i;
      }
      for(j=0;j<=stars;j++){
        cout<<"*";
      }
        cout<<endl;
}
}

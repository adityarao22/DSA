#include<iostream>
using namespace std;

int Sum_Of_Digits(int n){
     
     if(n==0){
        return 0;
     }
     return (n%10) + Sum_Of_Digits(n/10);
}

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    cout<<"Sum : "<<Sum_Of_Digits(n);
    return 0;
}
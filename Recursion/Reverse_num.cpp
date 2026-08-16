#include<iostream>
using namespace std;

int reverse(int n, int & rev){
    if(n==0){
        return 0;
    }
     int last_digit=n%10;
    rev=rev*10+last_digit;
    reverse(n/10,rev);

}

int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    int rev=0;
    reverse(n,rev);
    cout<<"Reverse : "<<rev;
    return 0;
}

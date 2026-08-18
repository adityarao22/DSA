#include<iostream>
using namespace std;

int prime(int n){
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    int count = prime(n); 
    if(count == 2){
        cout << "Number is prime";
    } else {
        cout << "Number is not prime";
    }
}
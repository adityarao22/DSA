#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter string :";
    cin >> str;

    int left=0;
    int right=str.size()-1;
    while(left<right){
        if(str[left]!=str[right]){
            cout<<"Not palindrome";
            break;
        }
        left++;
        right--;
    }
    cout<<"Palindrome";
    return 0;
}
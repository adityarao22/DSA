#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string :";
    cin>>str;
    map<char , int> mp;
    for(char ch : str){
     mp[ch]++;
    }
    for(auto x:mp){
        cout<<x.first<<" : "<<x.second<<endl;
    }
    return 0;
}
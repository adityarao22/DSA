#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
     
    int vowel=0;
    int consonent=0;
    for(char ch:str){
        ch=tolower(ch);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            vowel++;
        }
        else if(isalpha(ch)){
            consonent++;
        }
}
cout<<"Vowel : "<<vowel<<endl;
    cout<<"Consonent :"<<consonent;
    return 0;
}
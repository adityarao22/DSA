#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Aditya rao";
    string s2 = " is very smart boy";
    string s3 = "Hello";
    for (char ch : s)
    {
        cout << ch << " ";
    }
    cout << endl;

    s.push_back('!');
    cout << "After push : " << s << endl;

    s.pop_back();
    cout << "After pop : " << s << endl;

    string c = s + s2;
    cout << "Concatenate string :" << c << endl;

    // reverse string
    cout << "Reverse string : " << endl;
    reverse(s3.begin(), s3.end());
    cout << s3 << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int start = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            reverse(str.begin() + start, str.begin() + i);
            start = i + 1;
        }
    }

    cout << "Sentence: " << str << endl;
    return 0;
}
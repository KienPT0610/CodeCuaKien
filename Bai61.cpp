#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    set <char> st = {'a', 'e', 'i', 'o', 'u', 'y'};
    for(int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
        if(st.find(s[i]) != st.end()) {
            s[i] = 0;
        }
        if(s[i] != 0) {
            cout << "." << s[i];
        }
    }
}
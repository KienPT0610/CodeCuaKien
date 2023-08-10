#include <bits/stdc++.h>
#include <cctype>
using namespace std;

void ChuyenHoa(string s) {
    for(int i = 0; i < s.length(); i++) {
        if(i == 0) {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
    }
    cout << s;
}

void name(string s) {
    for(int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }
    cout << s;
}

int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    vector <string> vt;
    while(ss >> tmp) {
        vt.push_back(tmp);
    }

    for(int i = 0; i < vt.size() - 1; i++) {
        ChuyenHoa(vt[i]);
        if(i == vt.size() - 2) {
            cout << ", ";
        } else {
            cout << " ";
        }
    }
    name(vt[vt.size() - 1]);
}
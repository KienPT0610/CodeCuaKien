#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string s; cin >> s;
        int n = s.length();
        int kq = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                if(s[i] == s[j]) {
                    kq ++;
                }
            }
        }
        cout << kq << endl;
    }
}
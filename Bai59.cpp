#include <bits/stdc++.h>
using namespace std;

bool check(int n, int a[]) {
    int c = 0, l = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) c++;
        else l++;
    }
    if(n % 2 == 0 && c > l) return true;
    if(n % 2 != 0 && l > c) return true;
    return false;    
} 

int main() {
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string s; getline(cin, s);
        stringstream ss(s);
        string tmp;
        int n = 0;
        int a[201] = {};
        while(ss >> tmp) {
            a[n++] = stoi(tmp);
        }
        if(check(n, a)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
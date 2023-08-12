#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x;
        vector <int> a;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            a.push_back(x);
        }
        int l = distance(a.begin(), find(a.begin(), a.end(), x));
        if(l != n) {
            cout << l + 1 << endl; 
        } else {
            cout << -1 << endl;
        }
    }
}
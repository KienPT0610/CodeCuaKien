#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector <ll> a;
        vector <ll> b;
        for(int i = 0; i < n; i++) {
            ll x; cin >> x;
            if(x > 0) {
                a.push_back(x);
            } 
            if(x == 0) {
                b.push_back(x);
            }
        }

        for(auto x : a) {
            cout << x << " ";
        }
        for(int x : b) {
            cout << x << " ";
        }
        cout << endl;
    }
}
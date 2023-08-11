#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        ll a = INT_MIN; 
        ll b = INT_MAX;
        for(int i = 0; i < n; i++) {
            ll x; cin >> x;
            a = max(a, x);
        }
        for(int i = 0; i < m; i++) {
            ll x; cin >> x;
            b = min(b, x);
        }
        cout << a * b << endl;
    }
}
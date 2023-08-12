#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        ll n, k; cin >> k >> n;
        vector <ll> vt;
        while(k--) {
            for(int i = 0; i < n; i++) {
                ll x; cin >> x;
                vt.push_back(x);
            }
        }
        sort(vt.begin(), vt.end());
        for(auto x : vt) cout << x << " ";
    }   
}
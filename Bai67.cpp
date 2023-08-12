#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++) {
            a[i] = -1;
        }
        for(int i = 0; i < n; i++) {
            ll x; cin >> x;
            if(x >= 0 && x < n) {
                a[x] = x;
            }
        }

        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
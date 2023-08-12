#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// CODE OF KIEN PT //

ll bcnn(ll x, ll y, ll z) {
    ll a = __gcd(x, y);
    ll b = x * y / a;
    ll c = __gcd(b, z);
    return b * z/ c;
}

int main() {
    int t; cin >> t;
    while(t--) {
        ll x, y, z;
        cin >> x >> y >> z;
        int n; cin >> n;
        ll a = bcnn(x, y, z);
        ll l = pow(10, n - 1);
        ll d = (l / a);
        if(l % a != 0) {
            d++;
        }
        ll kq = a * d;
        if(kq >= l && kq <= pow(10, n)) {
            cout << kq << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}
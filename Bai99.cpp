#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        ll d = __gcd(b, c);
        while(d--) {
            cout << a;
        }
        cout << endl;
    }
    return 0;
}
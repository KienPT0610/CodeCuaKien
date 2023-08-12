#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// CODE OF KIEN PT //
#define lmt 100005

int a[lmt + 1] = {};

void sangNto() {
    for(int i = 2; i <= lmt; i++) a[i] = 1;
    for(int i = 2; i <= sqrt(lmt); i++) {
        if(a[i]) {
            for(int j = i*i; j <= lmt; j+=i) {
                a[j] = 0;
            }
        }
    }
}

int main() {
    int t; cin >> t;
    sangNto();
    while(t--) {
        int l, r; cin >> l >> r;
        int cnt = 0;
        for(int i = l; i <= r; i++) {
            cnt += a[i];
        }
        cout << cnt << endl;
    }
    return 0;
}
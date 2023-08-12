#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// CODE OF KIEN PT //

ll fb[94] = {};

void fibo() {
    fb[0] = 0;
    fb[1] = 1;
    for(int i = 2; i < 94; i++) {
        fb[i] = fb[i - 1] + fb[i - 2];
    }
}

int main() {
    int t; cin >> t;
    fibo();
    while(t--) {
        ll n; cin >> n;
        int lc = 0;
        for(int i = 0; i < 94; i++) {
            if(fb[i] == n) {
                lc = 1;
            }
        }
        if(lc) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
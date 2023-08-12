#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// CODE OF KIEN PT //

bool nto(int n) {
    if(n < 2) return false;
    if(n < 4) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5; i <= sqrt(n); i += 6) {
        if(n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool tang(int n) {
    int c = n % 10;
    n /= 10;
    while(n > 0) {
        if(c <= n % 10) return false;
        c = n % 10;
        n /= 10;
    }
    return true;
}

bool giam(int n) {
    int c = n % 10;
    n /= 10;
    while(n > 0) {
        if(c >= n % 10) return false;
        c = n % 10;
        n /= 10;
    }
    return true;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int l = pow(10, n - 1);
        int r = pow(10, n);
        int cnt = 0;
        for(int i = l; i <= r; i++) {
            if(tang(i) || giam(i)) {
                if(nto(i)) {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// CODE OF KIEN PT //

#define lmt 1000006

int nt[lmt + 1] = {0};

void erathone() {
    nt[0] = 1;
    nt[1] = 1;
    for(int i = 2; i*i <= lmt; i++) {
        if(nt[i] == 0) {
            for(int j = i*i; j <= lmt; j += i) {
                nt[j] = 1;
            }
        }
    }
}

int main() {
    int t; cin >> t;
    erathone();
    while(t--) {
        int n; cin >> n;
        int cnt = 0;
        for(int i = 1; i <= n; i++) {
            if(__gcd(i, n) == 1) {
                cnt ++;
            }
        }
        if(!nt[cnt]) {
            cout << "1" << endl;
        } else cout << "0" << endl;
    }
    return 0;
}
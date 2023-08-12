#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// CODE OF KIEN PT //

#define lmt 1000006

int nt[lmt + 1] = {0};

void erathone() {
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
        ll n; cin >> n;
        int cnt = 0;
        for(int i = 2; i <= sqrt(n); i++) {
            if(nt[i] == 0) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
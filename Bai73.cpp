#include <bits/stdc++.h>

using namespace std;

bool banary_search(int a[], int n, int x) {
    int l = 0, r = n - 1;
            while(l <= r) {
                int m = (r + l) / 2;
                if(x > a[m]) {
                    l = m + 1;
                } 
                if(x < a[m]) {
                    r = m - 1;
                } 
                if(a[m] == x) {
                    return true;
                }
            }
            return false;
}


int main() {
    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x;
            int a[n] = {};
            for(int i = 0; i < n; i++) {
                cin >> a[i];
            }
            if(banary_search(a, n, x)) {
                cout << 1 << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }
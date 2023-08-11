#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n] = {};
        for(int &x : a) cin >> x;
        int b[10] = {0};
        for(auto x : a) {
            while(x != 0) {
                int k = x % 10;
                b[k] ++;
                x /= 10;
            }
        }
        for(int i = 0; i < 10; i++) {
            if(b[i] != 0) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}
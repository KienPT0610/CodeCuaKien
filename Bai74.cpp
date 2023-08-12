#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n] = {};
        for(int i = 0; i < n - 1; i++) {
            cin >> a[i];
        }
        sort(a, a + n - 1);
        int lc = 0;
        for(int i = 0; i < n - 1; i++) {
            if(a[i] + 1 < a[i + 1]) {
                cout << a[i] + 1 << endl;
                lc = 1;
                break;
            }
        }
        if(!lc) {
            cout << a[n - 2] + 1 << endl;
        }
    }
}
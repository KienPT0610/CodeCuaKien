#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int a[n] = {};
        for(int &x : a) cin >> x;
        int count = 0;
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(a[i] + a[j] == k) {
                    count ++;
                }
            }
        }
        cout << count << endl;
    }
}
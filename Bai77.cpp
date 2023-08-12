#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n] = {};
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int x = INT_MAX;
        int y = INT_MAX;
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(x > abs(a[i] + a[j])) {
                    x = abs(a[i]+ a[j]);
                    y = a[i] + a[j];
                }
            }
        } 
        cout << y << endl;
    }
}
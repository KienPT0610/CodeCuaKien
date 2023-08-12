#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        vector <int> vt;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            vt.push_back(x);
        }
        int l = distance(vt.begin(), find(vt.begin(), vt.end(), x));
        cout << l + 1 << endl;
    }
}
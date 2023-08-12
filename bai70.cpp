#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector <int> a;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            a.push_back(x);
        }
        for(int i = 0; i < m; i++) {
            int x; cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());

        for(auto i : a) cout << i << " ";
        cout << endl;
    }
}
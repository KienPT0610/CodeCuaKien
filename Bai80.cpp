#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        set <int> st;
        int lc = 0;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            if(st.find(x) != st.end() && lc == 0) {
                lc = x;
            }
            st.insert(x);
        }
        if(!lc) {
            cout << -1 << endl;
        } else {
            cout << lc << endl;
        }
    }
}
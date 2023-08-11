#include <bits/stdc++.h>

using namespace std;

struct cmp {
    bool operator() (int a, int b) {
        return a > b;
    }
};

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        set <int, cmp> st;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            st.insert(x);
        }
        int dem = 0;
        for(auto x : st) {
            if(st.find(k - x) != st.end()) {
                dem ++;
            }
        }   
        cout << dem << endl;
    }
}
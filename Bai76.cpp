#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        set <int> st;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            st.insert(x);
        }

        if(st.size() > 1) {
            std::set<int>::iterator it = st.begin();
            std::advance(it, 1);
            cout << *st.begin() << " " << *it << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
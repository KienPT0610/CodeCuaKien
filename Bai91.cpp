#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// CODE OF KIEN PT //

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int cnt1 = 0, cnt2 = 0;
        int a = 0;
        for(int i = 2; i <= sqrt(n); i++) {
            while(n % i == 0) {
                if(i != a) {
                    cnt1 ++;
                    a = i;
                }
                cnt2 ++;
                n /= i;
            }
        }
        if(n > 1) {
            cnt1++; cnt2++;
        }
        if(cnt1 == 3 && cnt2 == 3) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
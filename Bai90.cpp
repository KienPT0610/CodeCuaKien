#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
#define lmt 10004
using namespace std;
// CODE OF KIEN PT //

int nt[lmt + 1] = {};

void Erathone() {
    nt[1] = 1; 
    for(int i = 2; i*i < lmt; i++) {
        if(nt[i] == 0) {
            for(int j = i*i; j <= lmt; j += i) {
                if(nt[j] == 0) {
                    nt[j] = i;
                }
            }
        }
    }
    for(int i = 2; i <= lmt; i++) {
        if(nt[i] == 0) {
            nt[i] = i;
        }
    }
}


int main() {
    int t; cin >> t;
    Erathone();
    while(t--) {
        int n; cin >> n;
        for(int i = 1; i <= n; i++) {
            cout << nt[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
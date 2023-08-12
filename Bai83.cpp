#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// CODE OF KIEN PT //

struct PhanSo {
    ll a, b;
};

void nhap(PhanSo &p) {
    cin >> p.a >> p.b;
}

void rutgon(PhanSo &p) {
    ll ms = __gcd(p.a, p.b);
    p.a /= ms;
    p.b /= ms;
}

void in(PhanSo p) {
    cout << p.a << "/" << p.b << endl;
}

int main() {
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}
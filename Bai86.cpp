#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// CODE OF KIEN PT //

struct PhanSo {
    ll tu, mau;
};

void nhap(PhanSo &a) {
    cin >> a.tu >> a.mau;
};

PhanSo tong(PhanSo p, PhanSo q) {
    PhanSo t;
    t.tu = p.tu * q.mau + p.mau * q.tu;
    t.mau = p.mau * q.mau;
    return t;
}

void in(PhanSo t) {
    ll ucln = __gcd(t.tu, t.mau);
    cout << t.tu / ucln << "/" << t.mau / ucln << endl;
}

int main() {
    struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
    return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// CODE OF KIEN PT //

struct SinhVien {
    string name;
    string lop;
    string date;
    float gpa;
};

void nhapThongTinSV(SinhVien &a) {
    getline(cin, a.name);
    cin >> a.lop >> a.date >> a.gpa;
    if(a.date[1] == '/') {
        a.date = '0' + a.date;
    }
    if(a.date[4] == '/') {
        a.date.insert(3, "0");
    }
}

void inThongTinSV(SinhVien a) {
    cout << "N20DCCN001" << " ";
    cout << a.name << " " << a.lop << " " << a.date << " ";
    cout << fixed << setprecision(2) << a.gpa << endl;
}

int main() {
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
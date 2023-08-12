#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// CODE OF KIEN PT //

struct NhanVien {
    string mnv = "00001";
    string name;
    string sex;
    string date;
    string address;
    string tax;
    string nkhd;
};

void nhap(NhanVien &a) {
    getline(cin, a.name);
    getline(cin, a.sex);
    getline(cin, a.date);
    getline(cin, a.address);
    getline(cin, a.tax);
    getline(cin, a.nkhd);
}

void in(NhanVien a) {
    cout << a.mnv << " ";
    cout << a.name << " " << a.sex << " " << a.date << " " << a.address << " ";
    cout << a.tax << " " << a.nkhd << endl;  
}

int main() {
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// CODE OF KIEN PT //

struct NhanVien {
    string mnv = "0000";
    string name;
    string sex;
    string date;
    string address;
    string tax;
    string nkhd;
};

void nhap(NhanVien &a) {
    scanf("\n");
    getline(cin, a.name);
    getline(cin, a.sex);
    getline(cin, a.date);
    getline(cin, a.address);
    getline(cin, a.tax);
    getline(cin, a.nkhd);
}

void inds(NhanVien ds[], int N) {
    for(int i = 0; i < N; i++) {
        if(i + 1 < 10) {
            cout << "0000" << i + 1 << " ";
        } else {
            cout << "000" << i + 1 << " ";
        }
        cout << ds[i].name << " " << ds[i].sex << " " << ds[i].date << " " << ds[i].address << " ";
        cout << ds[i].tax << " " << ds[i].nkhd << endl;  
    }
}

int main() {
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
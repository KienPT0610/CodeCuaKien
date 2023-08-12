#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
using namespace std;
// CODE OF KIEN PT //

struct SinhVien {
    string msv = "B20DCCN001";
    string name;
    string clas;
    string ng, th, nm;
    float gpa;
};

void nhap(SinhVien &a) {
    getline(cin, a.name);
    getline(cin, a.clas);
    string date;
    getline(cin, date);
    int cs = 0;
    for(int i = 0; i < date.length(); i++) {
        if(date[i] == '/' && cs == 0) {
            string ng = date.substr(cs, i - cs);
            if(i - cs < 2) ng = '0' + ng;
            a.ng = ng;
            cs = i + 1;
        } 
        if(date[i] == '/' && cs != 0) {
            string th = date.substr(cs, i - cs);
            if(i - cs < 2) th = '0' + th;
            a.th = th;
            cs = i + 1;
        }
        if(i == date.length() - 1) {
            string year = date.substr(cs, i - cs + 1);
            a.nm = year;
        }   
    }

    cin >> a.gpa;
    
}

void in(SinhVien a) {
    cout << a.msv << " " << a.name << " " << a.clas << " ";
    cout << a.ng << "/";
    cout << a.th << "/";
    cout << a.nm << " ";
    cout << fixed << setprecision(2) << a.gpa << endl;
}

int main() {
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

struct Point{
	double x, y;
};

void input(struct Point &A) {
	cin >> A.x >> A.y;
}

double distance(struct Point A, struct Point B) {
	return sqrt(pow((A.x - B.x), 2) + pow((A.y - B.y), 2));
}
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	struct Point A, B;
	int t; cin >> t;
	while(t--) {
		input(A); input(B);
		cout << fixed << setprecision(4) << distance(A, B) << endl;
	}
	
}

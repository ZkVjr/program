#include <iostream>
#include <vector>
#include<iomanip>
#include<algorithm>
#include<string>
#include<cmath>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;
double c;
double check(double x) {
	return x * x + sqrt(x) < c;
}
void solve() {
	cin >> c;
	double l = 0, r = 1e10;
	for (int i = 0; i < 120; ++i) {
		double m = (l + r) / 2;
		if (check(m)) {
			l = m;
		}
		else {
			r = m;
		}
	}
	cout << setprecision(9) << fixed << l << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int z = 1;
	//cin >> z
	while (z--) {
		solve();
	}
	return 0;
}
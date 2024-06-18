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

void solve() {
	ll k, x;
	cin >> k >> x;
	int l = 1, r = 2 * k - 1;
	ll t = k * (k + 1) / 2;
	if (t <= x) {
		while (l + 1 < r) {
			int m = (l + r) / 2;
			if (x <= m * (m + 1) / 2) {
				l = m;
			}
			else {
				r = m;
			}
		}
	}
	else {
		while (l + 1 < r) {
			int m = (l + r) / 2;
			if (x <= (k * (k + 1) / 2) + ((2 * k - m - 1) * (2 * k - m) / 2)) {
				l = m;
			}
			else {
				r = m;
			}
		}
	}
	cout << l << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int z = 1;
	cin >> z;
	while (z--) {
		solve();
	}
	return 0;
}
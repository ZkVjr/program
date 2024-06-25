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

ll x, k;
ll f(ll t) {
	if (t <= k) {
		return t * (t + 1) / 2;
	}
	return (k * (k + 1) / 2) + (k * (k - 1) / 2 - (2 * k - t - 1) * (2 * k - t) / 2);

}
void solve() {
	cin >> k >> x;
	if (f(2 * k - 1) <= x) {
		cout << 2 * k - 1 << "\n";
		return;
	}
	ll l = 0, r = 2 * k;
	while (l + 1 < r) {
		ll m = (l + r) / 2;
		if (f(m) < x) {
			l = m;
		}
		else {
			r = m;
		}
	}
	cout << r << "\n";
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
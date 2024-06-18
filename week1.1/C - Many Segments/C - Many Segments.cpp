#include <iostream>
#include <vector>
#include<iomanip>
#include<algorithm>
#include<string>
#include<cmath>
#include<utility>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
	ll n;
	cin >> n;
	ll l, x, y;
	vector<pair<ll, ll>> p;
	for (int i = 0; i < n; i++) {
		cin >> l >> x >> y;
		x = x * 2;
		y = y * 2;
		if (l == 2) {
			y -= 1;
		}
		if (l == 3) {
			x += 1;
		}
		if (l == 4) {
			x += 1;
			y -= 1;
		}
		p.emplace_back(x, y);
	}
	ll cnt = 0;
	for (int i = 0; i < n - 1; i++) {
		if (min(p[i].second, p[i + 1].second) >= max(p[i + 1].first, p[i].first)) {
			cnt++;
		}
	}
	cout << cnt << "\n";

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
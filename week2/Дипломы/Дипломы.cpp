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
int w, h, n;
bool check(ll T) {
	ll Tw = T / w;
	ll Th = T / h;
	if (Tw > 1e18 / Th) {
		return 1;
	}
	return Tw * Th >= n;
}
void solve() {
	cin >> w >> h >> n;
	ll l = 0, r = 1e18;
	while (l + 1 < r) {
		ll mid = (l + r) / 2;
		if (check(mid)) {
			r = mid;
		}
		else {
			l = mid;
		}
	}
	cout << r << "\n";
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
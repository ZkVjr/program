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
	int n, q;
	cin >> n >> q;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(all(a));
	vector<ll> p(n);
	p[0] = a[0];
	for (int i = 1; i < n; i++) {
		p[i] += a[i] + p[i - 1];
	}
	
	for (int i = 0; i < q; i++) {
		ll x;
		cin >> x;
        int l = 1, r = n ;
		while (l + 1 < r) {
			int m = (l + r) / 2;
			if (a[m] <= x) {
				l = m;
			}
			else {
				r = m;
			}
		}
		ll ans = x * (2 * l - n - 2) + p[n - 1] - 2 * p[l + 1];
		cout << ans << "\n";
	}
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
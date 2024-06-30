#include <iostream>
#include <vector>
#include<iomanip>
#include<algorithm>
#include<string>
#include<cmath>

#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
	ll n, q;
	cin >> n >> q;
	vector<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.rbegin(), a.rend());
	vector<ll> p(n);
	p[0] = a[0];
	for (int i = 1; i < n; i++) {
		p[i] += a[i] + p[i - 1];
	}
	
	for (int i = 0; i < q; i++) {
		int l = -1, r = n + 1;
		int que;
		cin >> que;
		if (que > p[n - 1]) {
			cout << "-1" << "\n";
		}
		else {
			while (l + 1 < r) {
				int m = (l + r) / 2;
				if (p[m] < que) {
					l = m;
				}
				else {
					r = m;
				}

			}
			cout << r + 1 << "\n";
		}
		
	}

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
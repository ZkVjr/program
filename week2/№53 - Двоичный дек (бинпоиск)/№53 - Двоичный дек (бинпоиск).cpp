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
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> p(n);
	p[0] = a[0];
	for (int i = 1; i < n; i++) {
		p[i] = p[i - 1] + a[i];
	}
	if (p[n - 1] < k) {
		cout << "-1" << "\n";
		return;
	}
	if (p[n - 1] == k) {
		cout << "0" << "\n";
		return;
	}
	int mn = 1e9;
	int m1 = 0;
	for (int i = 1; i < n; i++) {
		int l = i, r = n;
		while (l + 1 < r) {
			int m = (l + r) / 2;
			if (p[m] - p[i - 1] <= k) {
				l = m;
			}
			else {
				r = m;
			}
		}
		int ans = n - l - 1 + i;
		if (i == 1 && p[0] == 0) {
			m1 = ans;
		}
	    mn = min(mn, ans);
	}
	if (m1 == mn) {
		cout << mn - 1 << "\n";
	}
	else {
		cout << mn << "\n";
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
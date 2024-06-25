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
	vector<int> k(q);
	for (int i = 0; i < q; i++) {
		cin >> k[i];
	}
	vector<int> pr(n);
	pr[0] = a[0];
	for (int i = 1; i < n; i++) {
		pr[i] += max(pr[i - 1], a[i]);
	}
	vector<ll> prsum(n);
	prsum[0] = a[0];
	for (int i = 1; i < n; i++) {
		prsum[i] = prsum[i - 1] + a[i];
	}
	for (int i = 0; i < q; i++) {
		if (k[i] < a[0]) {
			cout << "0" << " ";
			continue;
		}
		if (k[i] >= pr[n - 1]) {
			cout << prsum[n - 1] << " ";
			continue;
		}
		int l = 0, r = n - 1;
		while (l + 1 < r) {
			int m = (l + r) / 2;
			if (pr[m] <= k[i]) {
				l = m;
			}
			else {
				r = m;
			}
		}
		cout << prsum[l] << " ";
	}
	cout << "\n";
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
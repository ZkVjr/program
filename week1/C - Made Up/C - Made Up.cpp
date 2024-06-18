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
	int n;
	cin >> n;
	vector<int> cnt(n);
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
	}
	vector<int> b(n);
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	vector<int> c(n);
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	for (int i = 0; i < n; i++) {
		cout << cnt[i] << " ";
	}
	ll res = 0;
	for (int j = 0; j < n; j++) {
		res += cnt[b[c[j]]];
	}
	cout << res << "\n";
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
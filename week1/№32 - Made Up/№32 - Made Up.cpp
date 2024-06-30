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
	vector<int> cnt(n + 1);
	vector<int> a(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
	}
	vector<int> b(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
	}
	vector<int> c(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> c[i];
	}
	ll res = 0;
	for (int j = 1; j <= n; j++) {
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
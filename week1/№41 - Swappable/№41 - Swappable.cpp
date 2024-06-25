#include <iostream>
#include <vector>
#include<iomanip>
#include<algorithm>
#include<string>
#include<cmath>
#include<map>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	map<int, int> cnt;
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
		cnt[v[i]]++;
	}
	ll res = 0;
	res += ll(n * (n - 1) / 2);
	for (auto [key, val] : cnt) {
		res -= ll(val * (val - 1) / 2);
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
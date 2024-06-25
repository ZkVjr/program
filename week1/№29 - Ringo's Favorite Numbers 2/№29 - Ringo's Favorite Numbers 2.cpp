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
	vector<int> v(n);
	vector<int> cnt(200);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		cnt[v[i] % 200]++;
	}
	int sum = 0;
	for (int i = 0; i < 200; i++) {
		sum += (cnt[i] * (cnt[i] - 1)) / 2;
	}
	cout << sum;
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
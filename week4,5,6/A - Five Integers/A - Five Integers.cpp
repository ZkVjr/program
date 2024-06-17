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
	vector<int> cnt(101);
	vector<int> v(5);
	for (int i = 0; i < 5; i++) {
		cin >> v[i];
		cnt[v[i]]++;
	}
	int cnt1 = 0;
	for (int i = 0; i < 101; i++) {
		if (cnt[i] != 0) {
			cnt1++;
		}
	}
	cout << cnt1 << "\n";
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
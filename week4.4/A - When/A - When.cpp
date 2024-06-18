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
	int k;
	cin >> k;
	int h = k / 60;
	int m = k - h * 60;
	h += 21;
	while (h >= 24) {
		h -= 24;
	}
	string sh = to_string(h);
	string sm = to_string(m);
	if (sh.size() != 2) {
		cout << "0";
	}
	cout << sh << ":";
	if (sm.size() != 2) {
		cout << "0";
	}
	cout << sm << "\n";
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
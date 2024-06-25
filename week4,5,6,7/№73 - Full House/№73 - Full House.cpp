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
	vector<int> v(5);
	for (int i = 0; i < 5; i++) {
		cin >> v[i];
	}
	sort(all(v));
	for (int i = 0; i < 2; ++i) {
		if (v[0] == v[1] && v[2] == v[3] && v[3] == v[4] && v[0] != v[4]) {
			cout << "Yes\n";
			return;
		}
		reverse(all(v));
	}
	cout << "No\n";
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
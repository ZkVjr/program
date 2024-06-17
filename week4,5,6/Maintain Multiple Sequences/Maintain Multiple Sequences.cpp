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
	vector<int> v;
	vector<int> p(n);
	for (int i = 0; i < n; i++) {
		int l;
		cin >> l;
		if (i == 0) {
			p[0] = l;
		}
		else {
			p[i] = p[i - 1] + l;
		}
		for (int j = 0; j < l; j++) {
			int a;
			cin >> a;
			v.push_back(a);
		}
	}
	for (int i = 0; i < q; i++) {
		int s, t;
		cin >> s >> t;
		for (int j = 0; j < n; j++) {

		}
	}
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
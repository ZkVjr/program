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
	int sum = 0;
	vector<int> ans;
	for (int i = 0; i < n; i++) {
		double l, r, a, b, c;
		cin >> l >> r >> a >> b >> c;
		double v = -b / 2 * a;
		while (l + 1.0 < r) {
			double mid = (l + r) / 2;
			if (mid > v) {
				r = mid;
			}
			else {
				l = mid;
			}
		}
		sum += (a * l * l + b * l + c);
		ans.push_back(l);
	}
	cout << setprecision(3) << fixed <<  sum << "\n";
	for (int i = 0; i < n; i++) {
		cout << ans[i] << " ";
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
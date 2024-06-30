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
const double eps = 1e-9;

bool leq(double a, double b) {
	return abs(a - b) < eps || a < b;
}
void solve() {
	int n;
	cin >> n;
	double sum = 0;
	vector<double> ans;
	for (int i = 0; i < n; i++) {
		double l, r, a, b, c;
		cin >> l >> r >> a >> b >> c;
		double v = -b / (2 * a);
		if(!leq(l, v) && leq(v, r)){
			v = l;
		}
		double mn = 1e9;
		double val;
		for (double x : {l, r, v}) {
			double fx = a * x * x + b * x + c;
			if (fx < mn) {
				mn = fx;
				val = x;
			}
		}
		sum += mn;
		ans.push_back(val);
	}
	cout << setprecision(3) << fixed << sum << "\n";
	for (int i = 0; i < n; i++) {
		cout << setprecision(3) << fixed << ans[i] << " ";
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
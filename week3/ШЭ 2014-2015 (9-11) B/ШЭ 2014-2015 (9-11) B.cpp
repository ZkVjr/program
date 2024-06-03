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
	int x1, y1, r1, v1;
	cin >> x1 >> y1 >> r1 >> v1;
	int x2, y2, r2, v2;
	cin >> x2 >> y2 >> r2 >> v2;
	double l = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	cout << setprecision(17) << fixed << (l - r1 - r2) / (v1 + v2);
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
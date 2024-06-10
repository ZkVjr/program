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
bool(int i1, int i2, int i3, int i4) {

}

void solve() {
	int n;
	cin >> n;
	vector<pair<int, int>> p;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		p.push_back(x.first, y.second);
	}

	int res = 0;
	for (int i1 = 0; i1 < n; i1++) {
		for (int i2 = i1 + 1; i2 < n; i2++) {
			for (int i3 = i2 + 1; i3 < n; i3++) {
				for (int i4 = i3 + 1; i4 < n; i4++) {
					check(i1, i2, i3, i4) {
						res++;
					}
				}
			}
		}
	 }
	cout << res;
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
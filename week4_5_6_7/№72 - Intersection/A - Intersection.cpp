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
	int l1, r1, l2, r2;
	cin >> l1 >> r1 >> l2 >> r2;
	int ans = min(r1, r2) - max(l1, l2);
	if (ans >= 0) {
		cout << ans << "\n";
	}
	else {
		cout << "0" << "\n";
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
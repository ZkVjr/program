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
	int n, m, x, t, d;
	cin >> n >> m >> x >> t >> d; // n-й др, m-й др, с 1 - x увеличивался на d, t - начальный рост;
	if (m > x) {
		cout << t << "\n";
	}
	else {
		cout << t - (x - m) * d << "\n";
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
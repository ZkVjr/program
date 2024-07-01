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
	ll n, k;
	cin >> n >> k;
	if (n % 2 == 0) {
		cout << 2*k + n << "\n";
	}
	else {
		int del = 0;
		for (int j = 2; j * j <= n; j++) {
			if (n % j == 0) {
				del = j;
				break;
			}
		}
		if (del == 0) {
			n += n;
		}
		else {
			n += del;
		}
		cout << 2 * (k - 1) + n << "\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int z = 1;
	cin >> z;
	while (z--) {
		solve();
	}
	return 0;
}
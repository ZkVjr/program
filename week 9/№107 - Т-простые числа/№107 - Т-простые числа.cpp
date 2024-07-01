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
	for (int i = 0; i < n; i++) {
		ll a;
		cin >> a;
		int cnt = 0;
		ll z = sqrt(a);
		if (a - (z * z) == 0 && a != 1) {
			for (int i = 2; i * i <= z; i++) {
				if (z % i == 0) {
					cnt++;
				}
			}
			if (cnt == 0) {
				cout << "YES\n";
			}
			else {
				cout << "NO\n";
			}
		}
		else {
			cout << "NO\n";
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
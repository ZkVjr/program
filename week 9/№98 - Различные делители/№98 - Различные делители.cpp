#include <iostream>
#include <vector>
#include<iomanip>
#include<algorithm>
#include<string>
#include<cmath>
#include<map>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;
	vector<int> v(10e9);
	v[1] = 1;
	v[2] = 1;

	for (int i = 3; i < (int)10e9; i++) {
		int cnt = 0;
		if(i % 2 != 0){
			for (int j = 3; j * j <= i; j += 2) {
				if (i % j == 0) {
					cnt++;
				}
			}
			if (cnt == 0) {
				v[i] = 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		ll ans = 0;
		int d;
		cin >> d;
		if (d == 1) {
			cout << "6\n";
		}
		else {
			int s2 = 0, s3 = 0;
			for (int j = d; j < (int)10e9; j++) {
				if (v[j] == 1) {
					s2 = j;
					break;
				}
			}
			for (int j = s2 + d; j < 10e9; j++) {
				if (v[j] == 1) {
					s3 = j;
					break;
				}
			}
			ans = s2 * s3;
			cout << ans << "\n";
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
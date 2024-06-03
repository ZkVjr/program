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
	int a, b;
	cin >> a >> b;
	if (a == 7 || b == 7) {
		cout << "7";
	}
	else {
		vector<int> cnt(5);
		if (a % 2 != 0) {
			cnt[1]++;
			if (a == 5) {
				cnt[4]++;
			}
			if (a == 3) {
				cnt[2]++;
			}
		}
		else {
			if (a == 2) {
				cnt[2]++;
			}
			if (a == 4) {
				cnt[4]++;
			}
			if (a == 6) {
				cnt[4]++;
				cnt[2]++;
			}
		}
		if (b % 2 != 0) {
			cnt[1]++;
			if (b == 5) {
				cnt[4]++;
			}
			if (b == 3) {
				cnt[2]++;
			}
		}
		else {
			if (b == 2) {
				cnt[2]++;
			}
			if (b == 4) {
				cnt[4]++;
			}
			if (b == 6) {
				cnt[2]++;
				cnt[4]++;
			}
		}
		int ans = 0;
		for (int i = 1; i <= 4; i++) {
			if (cnt[i] != 0) {
				ans += i;
			}
		}
		cout << ans;
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
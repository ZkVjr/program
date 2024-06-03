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
	int cnt = 0, cnt1 = 0, ans = 0;
	for (int i = 0; i < n; i++) {
		char a;
		cin >> a;
		if (a == '|') {
			cnt++;
		}
		if (a == '*') {
			cnt1++;
		}
		if ((cnt1 == 1 && cnt == 0) || (cnt1 == 0 && cnt == 2)) {
			cout << "out";
			ans++;
			break;
		}
	}
	if (ans == 0) {
		cout << "in";
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
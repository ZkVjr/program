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

const int N = 100;

int n, k, a[N];
bool check(int m) {
	int cnt = 1;
	int sum = 0;
	int ansi = -99;
	for (int i = 0; i < n; i++) {
		sum += a[i];
		if (sum > m) {

			if (i == ansi) {
				return 0;
			}
			else {
				cnt++;
				sum = 0;
				i--;
				ansi = i;
			}

		}
	}
	return cnt <= k;
}
void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> k;

	int l = 0, r = 40000;
	while (l + 1 < r) {
		int m = (l + r) / 2;
		if (check(m)) {
			r = m;
		}
		else {
			l = m;
		}
	}
	cout << r;
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
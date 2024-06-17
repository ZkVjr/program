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

const int N = 10004;
int n, k;
vector<int> x(N);
bool check(int t) {
	int last = x[1];
	int cnt = 1;
	for (int i = 2; i <= n; i++) {
		if (x[i] - last >= t) {
			cnt++;
			last = x[i];
		}
	}
	return cnt >= k;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> x[i];
	}
	int l = 0, r = 1000000004;
	while (l + 1 < r) {
		int mid = (l + r) / 2;
		if (check(mid)) {
			l = mid;
		}
		else {
			r = mid;
		}
	}
	cout << l;
	return 0;
}
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
	int n, k;
	cin >> n >> k;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int d1, d2, d3;
		cin >> d1 >> d2 >> d3;
		int sum = d1 + d2 + d3;
		v.push_back(sum);
	}
	vector<int> cop(n);
	cop = v;
	sort(v.begin(), v.end());
	int start = v[n - k];
	for (int i = 0; i < n; i++) {
		cop[i] += 300;
		if (cop[i] >= v[n - k]) {
			cout << "Yes" << "\n";
		}
		else {
			cout << "No" << "\n";
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
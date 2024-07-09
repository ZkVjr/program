#include <iostream>
#include <vector>
#include<iomanip>
#include<algorithm>
#include<string>
#include<cmath>
#include <numeric>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
	ll n, m;
	cin >> n >> m;
	vector<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<ll> b(m);
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	ll sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (ll)b[0] + a[i];
	}
	ll s = gcd(a[0] + b[0], sum);
	cout << s << " ";
	for (int i = 1; i < m; i++) {
		cout << abs(s - b[0]) + b[i] << " ";
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
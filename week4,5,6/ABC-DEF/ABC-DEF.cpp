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

const ll ch = 998244353;
void solve() {
	ll a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	a %= ch;
	b %= ch;
	c %= ch;
	d %= ch;
	e %= ch;
	f %= ch;
	ll x = ((a * b) % ch * c) % ch - ((d * e) % ch * f) % ch;
	if (x < 0) {
		x += ch;
		cout << x;
	}
	else {
		cout << x;
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
#include <iostream>
#include <vector>
#include<iomanip>
#include<algorithm>
#include<string>
#include<cmath>
#include<numeric>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;
int nod(int a, int b, int &x, int &y) {
	if (!b) {
		x = 1;
		y = 0;
		return a;
	}
	int x0, y0;
	int	g = nod(b, a % b, x0, y0);
	x = y0;
	y = x0 - y0 * (a / b);
	return g;
}
void solve() {
	ll a, b, c;
	cin >> a >> b >> c;
	int x, y;
	if (c % gcd(a, b) != 0) {
		cout << "-1\n";
	}
	else {
		int g = nod(a, b, x, y);
		cout << x * ((-c) / g) << " " << y * ((-c) / g);
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
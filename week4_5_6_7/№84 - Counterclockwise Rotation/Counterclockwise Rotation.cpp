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
// 84 задача
void solve() {
	double a, b, d;
	cin >> a >> b >> d;
	double len = sqrt(a * a + b * b);
	double al = atan2(b, a);
	double pi = acos(-1);
	d = (d * 2 * pi) / 360;
	double x = cos(d + al) * len;
	double y = sin(d + al) * len;
	cout << setprecision(20) << fixed << x << " " << y;
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
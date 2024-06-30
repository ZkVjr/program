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
	double a, b, c;
	cin >> a >> b >> c;
	// a^2 * x + b * x + c = 0
	double D = b * b - 4 * a * c;
	// D < 0
	// D = 0
	if (abs(D) < 1e-9) {
		cout << -b / (2 * a) << "\n";
	}
	// D > 0
	if (D > 0) {
		cout << (-b - sqrt(D)) / (2 * a) << " ";
		cout << (-b + sqrt(D)) / (2 * a);
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
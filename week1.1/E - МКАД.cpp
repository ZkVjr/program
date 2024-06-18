#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
void solve() {
	ll v, t;
	cin >> v >> t;
	ll p = v * t;
	if (v > 0) {
		cout << p % 109 << endl;
	}
	if(v < 0) {
		cout << (109 + (p % 109)) % 109 << endl;
	}
	if (v == 0) {
		cout << 0 << endl;
	}
}
int main()
{
	solve();
}
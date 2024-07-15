#include <bits/stdc++.h>
 
#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;
int nod(int b, int d, int &x, int &y) {
	if (!b || !d) {
		return 0;
	}
	int x0, y0;
	int g = nod(1, b * d % 1, x0, y0);
    x = y0;
    y = x0 - y0 * (b * d / 1);
	    return g;
}
    void solve() {
    ll d, b;
    cin >> b >> d;
	    int x, y;
	    if (-b * b * d % gcd(b * d, 1) != 0) {
            cout << "-1\n";
	    }
	    else {
	    	int g = nod(b, d, x, y);
            cout << x * ((b * b * d) / g) << " " << y * ((b * b * d) / g);
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
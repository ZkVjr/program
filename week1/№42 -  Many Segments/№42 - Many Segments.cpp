#include <iostream>
#include <vector>
#include<iomanip>
#include<algorithm>
#include<string>
#include<cmath>
#include<utility>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
	ll n;
	cin >> n;
	ll l, x, y;
	vector<pair<ll, ll>> p;
	for (int i = 0; i < n; i++) {
		cin >> l >> x >> y;
		x = x * 2;
		y = y * 2;
		x += (l == 3 || l == 4);
		y -= (l == 2 || l == 4);
		p.emplace_back(x, y);
	}
	ll cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; ++j) {
            if (min(p[i].second, p[j].second) >= max(p[j].first, p[i].first)) {
			    cnt++;
		    }
		}
		
	}
	cout << cnt << "\n";

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
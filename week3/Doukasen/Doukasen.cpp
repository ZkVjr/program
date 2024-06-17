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
#define fir  first;
#define sec second

struct dano {
	double s, v, t;
};

void solve() {
	int n;
	cin >> n;
	double t = 0, to = 0;
	vector<dano> v;
	for (int i = 0; i < n; i++) {
		double a, b;
		cin >> a >> b;
		t = a / b;
		to += t;
		struct dano d = { a, b, t };
		v.push_back(d);
	}

	to /= 2;
	double ans = 0;
	for (int i = 0; i < n; i++) {
		if (to >= v[i].t) {
			to -= v[i].t;
			ans += v[i].s;
		}
		else {
			ans += v[i].v * to;
			break;
		}
		
	}
   cout << setprecision(15) << fixed << ans;
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
#include <iostream>
#include <vector>
#include<iomanip>
#include<algorithm>
#include<string>
#include<cmath>
#include<set>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	set<int> a;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		a.insert(v[i]);
	}
	vector<int> baza (a.begin(),a.end());
	for (int i = 0; i < a.size(); i++) {
		cout << baza[i] << " ";
	}
	vector<pair<ll, ll>> cnt(10e12);
	for (int i = 0; i < baza.size(); i++) {
		for (int j = 2; j * j <= baza[i]; j++) {
			if (baza[i] % j == 0) {
				cnt[j].first++;
				cnt[j].second = j;
				cnt[baza[i] / j].first++;
				cnt[baza[i] / j].second = baza[i] / j;
			}
		}
	}
	sort(all(cnt));
	for (int i = 10e12; i >= 2; i--) {
		cout << cnt[i].first << " " << cnt[i].second << "// --->";
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
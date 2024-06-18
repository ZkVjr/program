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
	int n, m;
	cin >> n >> m;
	int A = 1, B = 0;
	vector<pair<int, int>> p;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		pair<int, int> pa;
		pa = make_pair(a, A);
		p.push_back(pa);
	}
	for (int i = 0; i < m; i++) {
		int b;
		cin >> b;
		pair<int, int> pa;
		pa = make_pair(b, B);
		p.push_back(pa);
	}
	sort(all(p));
	int mn = 1e9 + 4;
	for (int i = 0; i < p.size() - 1; i++) {
		int dif = p[i + 1].first - p[i].first;
		
		if (p[i].second != p[i + 1].second && mn > dif) {
			mn = dif;
		}
	}
	cout << mn;
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
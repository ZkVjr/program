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
	int n, q;
	cin >> n >> q;
	vector<int> a(n); // разница между ступенек
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> k(q); // запросы
	for (int i = 0; i < n; i++) {
		cin >> k[i];
	}
	vector<int> pr(n);
	pr[0] = a[0];
	for (int i = 1; i <= n; i++) {
		pr[i] = max(pr[i - 1], a[i]);
	}
	for (int i = 0; i < q; i++) {
		if (k[i] > a[0]) {
			cout << "0" << "\n";
		}
		if (k[i] <= pr[n - 1]) {
			cout <<
		}
	}

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int z = 1;
	cin >> z;
	while (z--) {
		solve();
	}
	return 0;
}
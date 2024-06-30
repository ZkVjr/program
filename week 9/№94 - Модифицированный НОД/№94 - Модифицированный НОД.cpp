#include <iostream>
#include <vector>
#include<iomanip>
#include<algorithm>
#include<string>
#include<cmath>
#include<map>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
	int a, b;
	cin >> a >> b;
	map<int, int> v;
	for (int i = 1; i <= min(a, b); i++) {
		if (a % i == 0 && b % i == 0) {
			v[i] = 1;
		}
	}
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int l0, r0;
		cin >> l0 >> r0;
		for (int j = r0; j >= l0; j--) {          
			if (v.find(j) == v.end()) {
				cout << j << "\n";
				cnt++;
				break;
			}
		}
		if (cnt == 0) {
			cout << "-1\n";
		}
		
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
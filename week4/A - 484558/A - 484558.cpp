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
	int n;
	cin >> n;
	int ost1, ost2;
	ost1 = n % 16;
	n /= 16;
	ost2 = n % 16;
	if (ost2 > 9) {
		int a = 64 + ost2 - 9;
		cout << char(a);
	}
	else {
		cout << ost2;
	}
	if (ost1 > 9) {
		int a = 64 + ost1 - 9;
		cout << char(a);
	}
	else {
		cout << ost1;
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
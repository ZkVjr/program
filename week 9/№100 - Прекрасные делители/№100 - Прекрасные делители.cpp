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

int step(int per, int st) {
	for (int i = 1; i <= st; i++) {
		per *= per;
	}
	return per;
}
void solve() {
	int n;
	cin >> n;
	int mx = 10e-9;
	for (int i = 1; i < 10; i++) {
		ll sum = 0;
		string s;
		for (int j = 0; j < i; j++) {
			s += '1';
		 }
		for (int j = 0; j < i - 1; j++) {
			s += '0';
		}
		for (int j = s.size() - 1; j <= 0; j--) {
			if (s[i] == '1') {
				sum += step(2, s.size() - 1 - j);
			}
		}
		if (n % sum == 0 && sum > mx) {
			mx = sum;
		}
	}
	cout << mx;
	
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
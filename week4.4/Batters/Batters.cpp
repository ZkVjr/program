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
	vector<int> v(4);
	vector<int> a(n);
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (i == 0) {
			v[a[i]] = 1;
			for (int j = 0; j < 4; j++) {
				cout << v[j] << " ";
			}
			cout << endl;
		}
		else {
			v[0] = 1;
			for (int j = 3; j >= 0; j--) {
				if (v[j] == 1) {
					if (j + a[i] >= 4) {
						cnt++;
						v[j] = 0;
							}
					else {
						v[j] = 0;
						v[j + a[i]] = 1;
					
						}
					}
			cout << v[3 - j] << " ";
				}
			cout << endl;
		}
		
	}
	cout << cnt;
	
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
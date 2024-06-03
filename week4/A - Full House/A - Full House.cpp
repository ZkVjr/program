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
	vector<int> v(5);
	for (int i = 0; i < 5; i++) {
		cin >> v[i];
	}
	all(v);
	int mni = -1, cnt = 0, cnt1 = 0;
	for (int i = 0; i < 4; i++) {
		mni = i;
		if (v[i] == v[i + 1]) {
			cnt++;
		}
		else {
			break;
		}
		
	}
	for (int i = mni; i < 4; i++) {
		if (v[i] == v[i + 1]) {
			cnt1++;
		}
	}
	if ((cnt == 3 && cnt1 == 2) || (cnt == 2 && cnt1 == 3) || (cnt == 5)) {
		cout << "Yes";
	}
	else {
		cout << "No";
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
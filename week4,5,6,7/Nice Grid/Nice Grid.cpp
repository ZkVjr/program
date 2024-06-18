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
	int r, c;
	cin >> r >> c;
	vector<vector<int>> v{ {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
						   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
						   {1,0,1,1,1,1,1,1,1,1,1,1,1,0,1},
						   {1,0,1,0,0,0,0,0,0,0,0,0,1,0,1},
						   {1,0,1,0,1,1,1,1,1,1,1,0,1,0,1},
						   {1,0,1,0,1,0,0,0,0,0,1,0,1,0,1},
						   {1,0,1,0,1,0,1,1,1,0,1,0,1,0,1},
						   {1,0,1,0,1,0,1,0,1,0,1,0,1,0,1},
						   {1,0,1,0,1,0,1,1,1,0,1,0,1,0,1},
						   {1,0,1,0,1,0,0,0,0,0,1,0,1,0,1},
						   {1,0,1,0,1,1,1,1,1,1,1,0,1,0,1},
						   {1,0,1,0,0,0,0,0,0,0,0,0,1,0,1},
						   {1,0,1,1,1,1,1,1,1,1,1,1,1,0,1},
						   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
						   {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
	};
	if (v[r - 1][c - 1] == 1) {
		cout << "black";
	}
	else {
		cout << "white";
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
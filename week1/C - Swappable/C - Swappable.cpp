﻿#include <iostream>
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
	int n;
	cin >> n;
	map<ll, int> cnt;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		cnt[v[i]]++;
	}
	int c = n * (n - 1) / 2;
	ll res = 0;
	for (const auto& [ind, kol] : cnt) {
		int kol = kol * (kol - 1) / 2;
		res += kol;
	}
	cout << c - res;

	
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
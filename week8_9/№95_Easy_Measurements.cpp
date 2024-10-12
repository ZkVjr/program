#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
	ll b, d;
	cin >> b >> d;
	ll r = ((b - 1) * gcd(b, d)) / d;
	cout << r <<  "\n";
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
#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll P = a * b * c * d - min(a * d, b * c) * min(a * d, b * c);
    ll Q = a * b * c * d;
    ll g = gcd(P, Q);
    cout << P / g << "/" << Q / g;
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0), cout.tie(0);
   int z = 1;
   //cin >> z;
   while (z--) {
      solve();
   }
   return 0;
}
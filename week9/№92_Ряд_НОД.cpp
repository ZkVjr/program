#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(m);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    vector<ll> cop;
    cop = a;
    for(int j = 0; j < m; j++){
        a = cop;
        for(int i = 0; i < n; i++){
            a[i] += b[j];
        }
        ll g = a[0];
        for(int i = 1; i < n; i++){
            g = gcd(g, a[i]);
        }
        cout << g << "\n";
    }

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
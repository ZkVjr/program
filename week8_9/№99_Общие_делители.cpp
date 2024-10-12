#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll g = a[0];
    for(int i = 1; i < n; i++){
        g = gcd(g, a[i]);
    }
    ll cnt = 0;
    for(ll i = 1; i * i <= g; i++){
        if(g % i == 0){
            cnt++;
            if(g != i * i){
                cnt++;
            }
        }
    }
    cout << cnt;
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
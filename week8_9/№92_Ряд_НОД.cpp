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
        if(i != 0){
            a[i] = abs(a[0] - a[i]);
        }
    }
    ll g = a[1];
    if(n > 1){
        for(int i = 2; i < n; i++){
            g = gcd(g, a[i]);
        }
    }
    
    ll cop = a[0];
    for(int i = 0; i < m; i++){
        cin >> b[i];
        if(n > 1){
            a[0] = cop;
            a[0] += b[i];
            cout << gcd(a[0], g) << " ";
        } else{
            cout << a[0] + b[i] << " ";
        }
        
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
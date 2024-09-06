#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

int dsum(ll x){
    ll res = 1;
    for(int i = 2; i * i <= x; ++i){
        if(x % i == 0){
            res += i + (x/i);
            if(i * i == x){
                res -= i;
            }
        }
    }
    return res;
}

void solve() {
    ll l, r;
    cin >> l >> r;
    
    ll u = 1e6, d = 1;

    for(int i = r; i >= l; i--){
        ll sum = dsum(i);
        // sum/i < u/d
        if(sum * d < u * i){
           u = sum;
           d = i;
        }
        if(u == 1){
            break;
        }
    }
    cout << d << "\n";
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
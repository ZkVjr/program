#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

bool check(ll x){
    if(x == 1){
        return false;
    }
    for(ll i = 2; i * i <= x; ++i){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}

void solve() {
    ll n;
    cin >> n;
    string ch;
    cin >> ch;
    ll val = 0;
    for(char c : ch){
        val = val * 10 + (c - '0');
    }
    for(int i = 0; i < 12 - n; ++i){
        val *=10;
    }
    while(!check(val)){
        ++ val;
    }
    cout << setw(12) << setfill('0') << val;
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
#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

ll mult(ll a, ll b){
    ll p = 1e9 + 7;
    ll pr = ll(a * b) % p;
    return pr;
}
void solve() {
    int n;
    cin >> n;
    ll ch = 1;
    ll zn = 1;
    vector<ll> a;
    for(int i = 2 * n - 1; i >= n + 1; i--){
        a.push_back(i);
    }
    vector<ll> b;
    for(int i = n - 1; i >= 1; i--){
        b.push_back(i);
    }
    for(int i = 0; i < n - 1; i++){
        if((ch * a[i]) % gcd(ch * a[i], b[i]) == 0 && gcd(ch * a[i], b[i]) != 1){
            ch *= (a[i] / gcd(ch * a[i], b[i]));
            cout << ch << " ";
        } 
        zn *= (b[i] / (a[i] / gcd(ch * a[i], b[i])));
    }
    cout << ch << " " << zn;

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
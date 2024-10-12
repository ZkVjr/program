#include <bits/stdc++.h>

#define ALL(x) x.begin(), x.end()
#define RALL(x) x.rbegin(), x.rend()
#define pb push_back
#define S second
#define F first
#define flash ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vll>;
using str = string;
using db = double;

void solve() {
    ll x, a, d, n;
    cin >> x >> a >> d >> n;
    vll v(1);
    v[0] = a;
    ll dif = 1e16;
    if(a == x || d == 0){
        cout << "0";
        return;
    }
    for(int i = 0; i < n; i++){
        if(abs(v[i] - x) <= dif){
            dif = abs(v[i] - x);
        } else{
            cout << dif;
            return;
        }
        v.pb(v[i] + d);
    } 

}

int main() {
   flash;
   int z = 1;
   //cin >> z;
   while (z--) {
      solve();
   }
   return 0;
}
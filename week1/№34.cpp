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
    ll n, k;
    cin >> n >> k;
    ll remb = 0;
    vector<pair<ll, ll>>p(n);
    for(int i = 0; i < n; i++){
        cin >> p[i].F;
        cin >> p[i].S;
    }
    sort(ALL(p));
    vector<pair<ll, ll>> res;
    ll cur = p[0].F;
    ll sum = p[0].S;
    for(int i = 1; i < p.size(); i++){
        if(p[i].F == cur){
            sum += p[i].S;
        } else{
            res.emplace_back(cur, sum);
            cur = p[i].first;
            sum = p[i].second;
        }

    }
    res.emplace_back(cur, sum);


    ll ans = 0;
    for(ll i = 0; i < res.size(); i++){
        if(res[i].F - ans > k){
            if(i == 0){
                cout << "0";
            } else{
                cout << res[i - 1].F + k;
            }
            
            return;
        } else{
            
            k = k - (res[i].F - ans) + res[i].S;
            ans = res[i].F;
        }
    }
    cout << ans + k;
    
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
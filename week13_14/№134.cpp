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
    ll n;
    cin >> n;
    map<ll, ll> count;
    multiset <ll> ms;
    for(int i = 0; i < n; i++){
        ll a;
        cin >> a;
        if(a == 1){
            ll x;
            cin >> x;
            ms.insert(x);
            count[x]++;
        }
        if(a == 2){
            ll x, c;
            cin >> x >> c;
            ll cnt = count[x];
            cnt = min(cnt, c);
            for(int i = 0; i < cnt; i++){
                ms.erase(ms.find(x));
                
            }
            count[x] -= cnt;
           

        }
        if(a == 3){
            cout << *ms.rbegin() - *ms.begin() << "\n";
        }
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
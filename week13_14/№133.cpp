
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
   
    if(a == x){
        cout << "0";
        return;
    }
    if((d == 0) || (a < x && d < 0) || (a > x && d > 0)){
        cout << abs(a - x);
        return;
    }
    ll k = abs(a - x) / d;
    k = abs(k);
    ll ans1 = abs(a + (k - 1) * d - x);
    ll ans2 = abs(a + k * d - x);
    ll ans3 = abs(a + (k + 1) * d - x);

    if(n >= k + 1){
        cout << min(ans1, min(ans2, ans3));
        return;
    }
    if(n >= k ){
        cout << min(ans1, ans2);
        return;
    }
    if(n >= k - 1){
        cout << ans1;
        return;
    }
    if(n < k - 1){
        cout << abs(a + (n - 1) * d - x);
        return;
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
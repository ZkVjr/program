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

ll GCD(ll a, ll b){
    while(b){
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
   ll n, ans = 1;
   cin >> n;
   ll cnt = 0;
   while(ans <= n){
        ans *= 2;
        cnt++;
   }
   cout << cnt ;

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
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
   ll n, m;
   cin >> n >> m;
   vll ch(n);
   for(int i = 0; i < n; i++){
      cin >> ch[i];
   }
   vll zn(n);
   for(int i = 0; i < n; i++){
      cin >> zn[i];
   }
   for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
         if(gcd(ch[i], zn[j]) > 1){
            ch[i] /= gcd(ch[i], zn[j]);
            zn[j] /= gcd(ch[i], zn[j]);
         }
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
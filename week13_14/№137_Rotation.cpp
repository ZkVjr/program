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
   ll n, q;
   cin >> n >> q;
   str s;
   cin >> s;
   str ss = s + s;
   ll start = 0;
   for(int i = 0; i < q; i++){
        ll t, x;
        cin >> t >> x;
        
        if(t == 1){
            start = (start - x + s.size()) % s.size();

        }
        if(t == 2){
         cout << ss[start + x - 1] << "\n";
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
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
    vll v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    ll cnt = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(min(v[i], v[j]) == i + 1 && max(v[i], v[j]) == j + 1){
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
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
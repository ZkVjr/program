#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
    ll a, b;
    cin >> a >> b;
    int cnt = 1;
    int mn = a;

    if(b % a != 0){
        cout << 0 << "\n";
    } else{
        
        while(a < (ll) sqrt(b)){
            a *= mn;
            cnt++;
        }
        
        if(cnt == 1){
            cout << cnt << "\n";
        } else{
            if(pow(mn, 2 * cnt) > b){
                cout << 2*cnt - 1 << "\n";
            }else{
                cout << 2 * cnt << "\n";
            }
        }
        
    }
}
    

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0), cout.tie(0);
   int z = 1;
   cin >> z;
   while (z--) {
      solve();
   }
   return 0;
}
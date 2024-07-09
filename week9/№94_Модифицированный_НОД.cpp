#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
    ll a, b;
    cin >> a >> b;
    vector<ll> cnt(min(a, b) + 1);
    for(int i = 1; i * i <= a; i++){
        if(a % i == 0){
            cnt[i]++;
            if(a != i * i){
                if(a / i <= min(a, b)){
                    cnt[a / i]++;
                }
                
            }
            
        }
    }
    for(int i = 1; i * i <= b; i++){
        if(b % i == 0){
            cnt[i]++;
            if(b != i * i){
                if(b / i <= min(a, b)){
                     cnt[b / i]++;
                }
               
            }
            
        }
    }
    
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        ll l, r;
        cin >> l >> r;
        for(ll j = r; j >= l; j--){
            if(j <= min(a, b) && cnt[j] == 2){
                cout << j << "\n";
                break;
            }
            if(j == l){
                cout << "-1\n";
            }
        }
    }
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
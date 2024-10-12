#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    ll sum = 0;
    int cnt = 0;
    ll ans = 0;
    if(n == 1){
        cout << 1;
        return;
    }
    while(sum < n / 2){
        sum = 0;
        for(int i = cnt; i <= 2*cnt; ++i){
            sum += (ll) pow(2, i);
        }
        if(n % sum == 0){
            ans = sum;
        }
        cnt++;
    }
    cout << ans;
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
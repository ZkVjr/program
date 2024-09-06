#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
    int n, q;
    cin >> n >> q;
    int c, x;
    vector<int> cnt(n);
    for(int i = 0; i < q; i++){
        cin >> c >> x;
        if(c == 1){
            cnt[x - 1]++;
        }
        if(c == 2){
            cnt[x - 1] += 2;
        }
        if(c == 3){
            if(cnt[x - 1] >= 2){
                cout << "Yes\n";
            } else{
                cout << "No\n";
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
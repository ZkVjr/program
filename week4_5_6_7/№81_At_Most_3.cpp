#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
    int n, w;
    cin >> n >> w;
    vector<ll> a(n);
    vector<ll> ans(1e7);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        ans[a[i]] = 1;
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            ans[a[i] + a[j]] = 1;
        }
    }
    for(int i = 0; i < n - 2; i++){
        for(int j = i + 1; j < n - 1; j++){
            for(int k = j + 1; k < n; k++){
                ans[a[i] + a[j] + a[k]] = 1;
            }
        }
    }
    int sum = 0;
    for(int i = 0; i <= w; i++){
        sum += ans[i];
    }
    cout << sum << "\n";
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
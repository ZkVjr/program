#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v;
    int mx = -
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        vector<int> a(k);
        for(int j = 0; j < k; j++){
            cin >> a[j];
            mx = max(mx, a[j]);
        }
        v.push_back(a);
    }
    vector<int>
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
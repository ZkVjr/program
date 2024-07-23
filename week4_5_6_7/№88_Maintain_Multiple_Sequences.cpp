#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> v;
    for(int i = 0; i < n; i++){
        int l;
        cin >> l;
        vector<int> a(l);
        for(int j = 0; j < l; j++){
            cin >> a[j];
        }
        v.push_back(a);
    }

    
    for(int i = 0; i < q; i++){
        int s, t;
        cin >> s >> t;
        cout << v[s - 1][t - 1] << "\n";

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
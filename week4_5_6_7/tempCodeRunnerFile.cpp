#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<string> v;
    for(int i = 0; i < n; i++){
        int l;
        cin >> l;
        string s = "";
        for(int j = 0; j < l; j++){
            int a;
            cin >> a;
            s += a + '0';
        }
        v.push_back(s);
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
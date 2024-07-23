#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<vector<int> > a(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    vector<int> v;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            v.push_back(a[i][j]);
        }
    }
    //sort(all(v));
    for(int i = 0; i < n * n; i++){
        cout << v[i] << " ";
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
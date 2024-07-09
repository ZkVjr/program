#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
     int n, m;
     cin >> n >> m;
     vector<int> cntch(1e9);
     vector<int> a(n);
     for(int i = 0; i < n; i++){
        cin >> a[i];
        for(int j = 2; j * j <= a[i]; j++){
            while(a[i] % j == 0){
               a[i] /= j;
               cntch[j]++;
            }
        }
     }
     vector<int> cntzn(1e9);
     vector<int> b(m);
     for(int i = 0; i < m; i++){
        cin >> b[i];
        for(int j = 2; j * j <= b[i]; j++){
            while(b[i] % j == 0){
               b[i] /= j;
               cntzn[j]++;
            }
        }
     }
     for(int i = 0; i < n; i++){
        cout << " cntch[" << i + 1 << "] = " << cntch[i];
     }
     for(int i = 0; i < m; i++){
        cout << " cntzn[" << i + 1 << "] = " << cntzn[i];
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
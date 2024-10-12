#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
    ll a, b;
    cin >> a >> b;
    ll g = gcd(a, b);
    vector<int> p;
    for(int i = 1; i * i <= g; i++){
        if(g % i == 0){
            p.push_back(i);
            p.push_back(g / i);
        }
    }
    sort(all(p));
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        ll left, right;
        cin >> left >> right;
        int l = 0, r = p.size();
        while(l + 1 < r){
            int m = (l + r) / 2;
            if(p[m] <= right){
                l = m;
            } else{
                r = m;
            }
        }
        if(p[l] < left){
            cout << "-1\n";
        } else{
            cout << p[l] << "\n";
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
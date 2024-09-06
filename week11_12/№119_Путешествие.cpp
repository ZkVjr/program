#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {

    ll n;
    cin >> n;
    vector<pair<ll, ll>> a;
    a.emplace_back(1, 1);

    for(int i = 1; i < n; i++){
        a.emplace_back(1, 0);
    }


    int u, v;
    for(int i = 0; i < n - 1; i++){
        cin >> u >> v;
        a[u - 1].first = -1;
        a[v - 1].second += a[u - 1].second; 
    }
    sort(all(a));
    for(int i = 0; i < n; i++){
        cout << a[i].first << " " << a[i].second << "\n";
    }
    int l = 0, r = n - 1;
    while(l + 1 < r){
        int mid = (l + r) / 2;
        if(a[mid].first == -1){
            l = mid;
        } else{
            r = mid;
        }
    }
    double sum = 0;
    for(int i = r; i < n;  i++){
        sum += a[i].second;
    }
    cout << setprecision(15) << fixed << sum / (n - r) << "\n";


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
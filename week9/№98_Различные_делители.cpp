#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    for(int i = 3; i < 100000; i+=2){
        int cnt = 0;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                cnt++;
            }
        }
        if(cnt == 0){
            v.push_back(i);
        }
    }
    int t;
    cin >> t;
    for(int tt = 0; tt < t; tt++){
        int d;
        cin >> d;
        ll mn1 = 0;
        int numb = 0;
        for(int i = 1; i < v.size(); i++){
            if(v[i] >= d + 1){
                 mn1 = v[i];
                 numb = i;
                 break;
            }
        }
        ll mn2 = 0;
        for(int i = numb + 1; i < v.size(); i++){
            if(v[i] >= mn1 + d){
                mn2 = v[i];
                break;
            }
        }
        ll ans = (ll) mn1 * mn2;
        cout << ans << "\n";
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
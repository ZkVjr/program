#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

ll stepen (ll a, ll k){
    ll stepans = 1;
    while(k--){
        stepans *= a;
    }
    return a;
}

void solve() {
    string s;
    cin >> s;
    string cop = s;
    sort(all(cop));
    ll mx = 10;
    if(cop[cop.size() - 1] - '0' < 10){
        mx = cop[cop.size() - 1];
    } else{
        mx += cop[cop.size() - 1] - 'A';
    }
    reverse(all(s));
    cout << s << '\n';
    vector<ll> sls;
    for(int i = 0; i < s.size(); i++){
        cout << s[i] << " ";
            ll sl = 0;
            if(s[i] - '0' < 10){
                sl = s[i] - '0';
            } else{
                sl = 10;
                sl += (s[i] - 'A');
            }
        sls.push_back(sl);

    }
    cout << endl;
    for(int i = 0; i < sls.size(); i++){
        cout << sls[i] << " ";
    }
    for(int i = mx + 1; i <= 36; i++){ 
        ll sum = sls[0];
        for(int j = 1; j < sls.size(); j++){
            sum += (sls[j] * stepen(i, j));
            
        }
        cout << "i= " << i << " --- " << sum << ";  ";
        if(sum % (i - 1) == 0){
            cout << i;
            return;
        }
    }
    cout << "No solution.";
    
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
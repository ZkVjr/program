#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

vector<ll> used;
vector<ll> p;
void resheto(ll n){
    //изменяем размер вектора на n + 1
    used.resize(n + 1);

    for(ll i = 2; i <= n; i++){
        if(used[i]){
            continue;
        }
        
        p.push_back(i);
        for(ll j = i * i; j <= n; j += i){
            used[j] = 1;
        }
        
    }
    
}
void solve() {
    ll l, n;
    cin >> l >> n;
    resheto(n);
    vector<ll> v;
    v = p;
    vector<ll> cop;
    for(ll i = 0; i < v.size(); i++){
        if(v[i] >= l){
            cop.push_back(v[i]);
        } 
        
    }
    if(cop.size() == 0){
        cout << "0\n";
    } else{
        for(ll i = 0; i < cop.size(); i++){
        cout << cop[i] << " ";
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
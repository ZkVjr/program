#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

vector<ll> used;
vector<ll> p;
void resheto(int n){
    //изменяем размер вектора на n + 1
    used.resize(n + 1);

    for(int i = 2; i <= n; i++){
        if(used[i] == 0){
            p.push_back(i);
            for(int j = i * i; j <= n; j+= i){
                used[j] = 1;
            }
        }
        else{
            continue;
        }
    }
    
}
void solve() {
    int n;
    cin >> n;
    resheto(n + 1000);
    vector<ll> v;
    v = p;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << v[n - 1] << "\n";
    
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0), cout.tie(0);
   int z = 1;
   cin >> z;
   while (z--) {
      solve();
   }
   return 0;
}
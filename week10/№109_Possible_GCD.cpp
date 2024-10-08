#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

int d(int x){
    int res = 0;
    for(int i = 1; i * i <= x; ++i){
        if(x % i == 0){
            res += 2;
            if(i == x/i){
                res--;
            }
        }
    }
    return res;
}

void solve() {
    int a, b;
    cin >> a >> b;
    cout << d(abs(a - b)) << "\n";
    
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
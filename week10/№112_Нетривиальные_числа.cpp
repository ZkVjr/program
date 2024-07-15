#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
    int l, r;
    cin >> l >> r;
    if(l == r){
        cout << l;
        return;
    } else{
        if(l % 2 == 0){
            l++;
        } 
        if(r % 2 == 0){
            r--;
        }
        if(l == r){
            cout << l;
            return;
        }
        double mn = 1e9;
        int ansi = 0; 
        for(int i = l; i <= r; i+=2){
            ll sum = 1;
            for(int j = 3; j * j <= i; j+=2){
                if(i % j == 0){
                    sum += j;
                    if(i != j * j){
                        sum += (i / j);
                    }
                }
            }
            double ans = sum / i;
            if(sum == 1){
                ansi = i;
                mn = 0,001;
            }
            if(mn - ans > 1e-9){
                mn = ans;
                ansi = i;
            }
        }
        
        cout << ansi;
        return;
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
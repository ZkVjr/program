#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
    ll b, c;
    cin >> b >> c;
    ll a = 0;
    if(b == c){
      a = 1;
    } 
      if(b < c){
         if(c % b == 0){
            a = c / b;
         } else{
            ll g = gcd(b, c);
            if(g == 1){
               a = c;
            } else{
               a = c / g;
            }
         }
      }
      if(b > c){
         if(b % c == 0){
            a = 1;
         } else{
            ll g = gcd(b, c);
            if(g == 1){
               a = c;
            } else{
               a = c / g;
            }
         }
      }

    cout << a << '\n';
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
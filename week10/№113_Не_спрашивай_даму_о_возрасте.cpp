#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

int convert(char c){
    if(c >= '0' && c <= '9'){
        return c - '0';
    }
    return c - 'A' + 10;
}

void solve() {
   string a;
   cin >> a;
   int sum = 0;
   int mxlet = 0;
   for(char c : a){
    mxlet = max(mxlet, convert(c));
    sum += convert(c);
   }

   for(int k = max(2, mxlet + 1); k <= 36; ++k){
        if(sum % (k - 1) == 0){
            cout << k << "\n";
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
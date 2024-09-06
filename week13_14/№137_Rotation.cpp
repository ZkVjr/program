#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    s += s;
    int siz = s.size();
    int l = siz / 2, r = siz - 1;
    for(int i = 0; i < q; i++){
        int a, b;
        cin >> a >> b;
        if(a == 1){
            l -= b;
            r -= b;
            if(l < 0){
                cout << l << " ";
                l = (siz / 2) + l + 1;
                r = siz + l;
                cout << l << "\n";
                
            }
            
        }
        if(a == 2){
            cout << s[l + b - 1] << "\n";
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
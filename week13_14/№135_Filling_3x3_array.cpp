#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
    int h1, h2, h3, w1, w2, w3;
    cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3; //  a - (h1, w1); b - (h1, w2); d - (h1, w3)
                                             //  c - (h2, w1); x - (h2, w2); w - (h2, w3)
                                             //  e - (h3, w1); y - (h3, w2); z - (h3, w3)
    int a, b, c, d, e;
    for(int i = 1; i <= 30; i++){
        a = i;
        if(h1 - a >= 2 && w1 - a >= 2){
            for(int j = 1; j <= 30; j++){
                b = j;
                d = h1 - a - b;
                if(d >= 1 && w2 - b >= 2 && w3 - d >= 2){
                    for(int s = 1; s <= 30; s++){
                        int c = s;
                        e = w1 - a - c;
                        if(e >= 1 && h2 - c >= 2 && h3 - e >= 2){
                            
                        }
                     }
                }
                
        }
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
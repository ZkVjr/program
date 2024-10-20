#include <bits/stdc++.h>

#define ALL(x) x.begin(), x.end()
#define RALL(x) x.rbegin(), x.rend()
#define pb push_back
#define S second
#define F first
#define flash ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0)
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vll>;
using str = string;
using db = double;


void solve() {

    // a b r1
    // c d r2
    // c1 c2 z

    int h1, h2, h3, w1, w2, w3;
    cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
    int res = 0;
    for(int a = 1; a <= 30; a++){
        for(int b = 1; b <= 30; b++){
            for(int c = 1; c <= 30; c++){
                for(int d = 1; d <= 30; d++){
                    int r1 = h1 - a - b;
                    int r2 = h2 - c - d;
                    int c1 = w1 - a - c;
                    int c2 = w2 - b - d;
                    int z1 = h3 - c1 - c2;
                    int z2 = w3 - r1 - r2;
                    if(z1 != z2 || min({r1, r2, c1, c2, z1}) <= 0){
                        continue;
                    }
                    ++res;

                }
            }
        }
    }
    cout << res << "\n";

}

int main() {
   flash;
   int z = 1;
   //cin >> z;
   while (z--) {
      solve();
   }
   return 0;
}
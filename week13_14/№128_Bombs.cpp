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

const int N = 24;
int r, c;
str s[N];

bool chdig(char x){
    return '0' <= x && x <= '9';
}

void solve() {
    cin >> r >> c;
    for(int i = 0; i < r; i++){
        cin >> s[i];
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(!chdig(s[i][j])){
                continue;
            }
            int x = s[i][j] - '0';
            for(int i2 = 0; i2 < r; i2++){
                for(int j2 = 0; j2 < c; j2++){
                    if(abs(i - i2) + abs(j - j2) <= x && s[i2][j2] == '#'){
                        s[i2][j2] = '.';
                    }
                }
            }
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(chdig(s[i][j])){
                s[i][j] = '.';
            }
            cout << s[i][j];
        }
        cout << "\n";
    }

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
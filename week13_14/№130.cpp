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

const int N = 34;

int h, w;
bool a[N][N], b[N][N], shift[N * 2][N * 2];

bool check(int r, int c){
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(b[i][j] != shift[r + i][c + j]){
                return false;
            }
        }
    }
    return true;
}
void solve() {
    cin >> h >> w;
    for(int i = 0; i < h; i++){
        str s;
        cin >> s;
        for(int j = 0; j < w; j++){
            a[i][j] = (s[j] == '#');
            shift[i][j] = a[i][j];
            shift[i + h][j] = a[i][j];
            shift[i][j + w] = a[i][j];
            shift[i + h][j + w] = a[i][j];
        }
    }
    for(int i = 0; i < h; i++){
        str s;
        cin >> s;
        for(int j = 0; j < w; j++){
            b[i][j] = (s[j] == '#');
        }
    }
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(check(i, j)){
                cout << "Yes\n";
                return;
            }
        }
    }
    cout << "No\n";

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
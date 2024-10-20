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

const int N = 104;

int n, a[N][N], b[N][N];

bool check(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 1 && b[i][j] == 0){
                return false;
            }
        }
    }
    return true;
}

int c[N][N];
void rotate(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            c[n + 1 - j][i] = a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            a[i][j] = c[i][j];
        }
    }
}

void solve() {
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> b[i][j];
        }
    }
    for(int i = 0; i < 4; i++){
        if(check()){
            cout << "Yes\n";
            return;
        }
        rotate();
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
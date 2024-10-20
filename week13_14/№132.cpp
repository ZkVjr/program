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

// 1 ... k + 1 ... 2k + 1 ... 3k + 1 ... ... tk + 1 -- i % k  => 1 1 1 1 1 1 1
// 2 ... k + 2 ... 2k + 2 ... 3k + 2 ... ... tk + 2 -- i % k  => 2 2 2 2 2 2 2

const int N = 2e5 + 4;
int n, k, a[N];
vector<int> chains[N];

void solve() {
    cin >> n >> k;
    for(int i = 0, x; i < n; i++){
        cin >> x;
        chains[i % k].pb(x);
    }
    for(int i = 0; i < k; i++){
        sort(ALL(chains[i]));
        for(int j = 0; j < chains[i].size(); j++){
            a[i + j*k] = chains[i][j];
        }
    }
    for(int i = 0; i + 1 < n; i++){
        if(a[i] > a[i + 1]){
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";

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
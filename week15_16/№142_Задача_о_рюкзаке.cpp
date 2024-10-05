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

const int N = 20;
ll n, W, w[N];
vector<pair<ll, ll>> par(N);
vector<pair<ll, ll>> s;

ll ansP = 0;
vector<pair<ll, ll>> ans;
void bt(int i, ll psum, ll wsum) {
    if(i == n){
        if(wsum > W){
            return;
        }
        if((psum > ansP) || (psum == ansP && s.size() < ans.size()) || (psum == ansP && s.size() == ans.size() && s < ans)){
            ansP = psum;
            ans = s;
        }
        return;
    }

    bt(i + 1, psum, wsum);

    s.emplace_back(par[i].F, par[i].S);
    bt(i + 1, psum + par[i].S, wsum + w[i]);
    s.pop_back();


}

int main() {
   flash;
   cin >> n >> W;
   for(int i = 0; i < n; i++){
        cin >> w[i];
        cin >> par[i].S;
        par[i].F = i;
   }
   bt(0, 0, 0);
   cout << ans.size() << " " << ansP << "\n";
    ll cnt = ans.size();
   for(int i = 0; i < ans.size(); i++){
    for(int j = 0; j < n; j++){
        if(ans[i].S == par[j].S && par[j].S != -1 && cnt > 0){
            par[j].S = -1;
            cnt--;
            cout << j + 1 << " ";
        }
    }
   }

   return 0;
}
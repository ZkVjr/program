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

 vector<pair<ll, char>> per(str st){
    vector<pair<ll, char>> pst;
    ll count = 0;
    for(int i = 0; i < st.size() - 1; i++){
        count++;
        if(st[i] != st[i + 1]){
          pst.emplace_back(count, st[i]);
          count = 0;
          if(i == st.size() - 2){
            pst.emplace_back(1, st[i + 1]);
          }
        } 
    }
    count = 0;
    return pst;
}
void solve() {
    str s, t;
    cin >> s >> t;
    if(s == t){
        cout << "Yes";
        return;
    }
    if(s.size() > t.size()){
        cout << "No";
        return;
    }
    
    vector<pair<ll, char>> ps;
    ps = per(s);
   
    vector<pair<ll, char>> pt;
    pt = per(t);

    if(ps.size() != pt.size()){
        cout << "No";
        return;
    }
    for(int i = 0; i < ps.size(); i++){
        if(ps[i].S != pt[i].S){
            cout << "No";
            return;
        }
        if(ps[i].F > pt[i].F){
            cout << "No";
            return;
        }
        if(ps[i].F < pt[i].F && ps[i].F == 1){
            cout << "No";
            return;
        }
        // if((ps[i].F < pt[i].F) && (2 * (ps[i].F - 1) + ps[i].F < pt[i].F)){
        //     cout << "No";
        //     return;
        // }
    }
    cout << "Yes";

    

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
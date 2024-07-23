#include <bits/stdc++.h>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n * n);
   
    for(int i = 0; i < n * n; i++){
        cin >> a[i];
    }
    sort(all(a));
    int mx1 = a[n * n - 1];
    int mx2 = a[n * n - 2];
    cout << mx1 << " " << mx2 << "; ";
    vector<int> ans;
    ans.push_back(mx1);
    ans.push_back(mx2);
    multiset<int> ms(all(a));
    ms.erase(ms.find(mx1));
    ms.erase(ms.find(mx2));
    // cout << *(ms.crbegin()) << ";   ";
    int g = gcd(mx1, mx2);
    ms.erase(ms.find(g));
    ms.erase(ms.find(g));
    while(ms.size() > 0){
        int ch = *(ms.crbegin());
        ans.push_back(ch);
        for(int i = 0; i < ans.size(); i++){
            g = gcd(ans[i], ch);
            for(int j = 0; j < 2; j++){
                ms.erase(ms.find(g));
            }
        }
    }
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
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
#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
       
       if(cnt != k){
            cout << s[i];
        }
        if(cnt == k){
            cout << 'x';
        }

        if(s[i] == 'o' && cnt != k){
            cnt++;
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
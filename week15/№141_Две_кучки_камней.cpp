#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

const int N = 18;
int n, stat, dif = 0, mindif = 99999999, sum = 0; 
int i = 1;
bool used[N];
int p[N];
vector<vector<int> > res(n, vector<int>());
vector<int> cop;


void bt(){
    if(i == n + 1){
        // for(int j = 1; j <= n; j++){
        //     cout << p[j] << " ";
        // }
        // cout << "\n";
        for(int j = 1; j <= n; j++){
            cop.push_back(p[j]);
        }
        res.insert(res.end(), all(cop));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < cop.size(); j++){
                cout << res[i][j] << " ";
            }
            cout << "\n";
        }
        return;
    }

    for(int k = 1; k <= n; ++k){
        if(used[k]){
            continue;
        }
        used[k] = 1;
        p[i] = k;
        i++;
        bt();
        i--;
        p[i] = 0;
        used[k] = 0;
    }
}


int main() {
   ios::sync_with_stdio(0);
   cin.tie(0), cout.tie(0);
   cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++){
        cin >> v[i];
   }
   sort(all(v));
   vector<pair<int, int>> pr(n);

   for(int i = 0; i < n; i++){
        pr.emplace_back(i + 1, v[i]);
   }
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < cop.size(); j++){
//             cout << res[i][j] << " ";
//        }
//        cout << "\n";
//    }
   
   
   return 0;
}
#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

const int N = 14;

int n, dif, cnt = 0; 
int i = 1, p[N];
bool used[N];


void bt(){
    if(i == n + 1){

        // for(int j = 1; j <= n; j++){
        //     cout << p[j] << " ";
        // }
        // cout << "\n";
        for(int j = 1; j <= n - 1; j++){
            if(abs(p[j] - p[j + 1]) > dif){
                return;
            }
        }
        
        cnt++;
        // cout << "cnt = " <<  cnt << ";  \n";
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
   cin >> n >> dif;
   bt();
   cout << cnt << "\n";
   
   return 0;
}
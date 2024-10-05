#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

const int N = 18;
ll n, stat, dif = 0, mn = 1e8, sum = 0; 
int i = 0;

vector<ll> p;
ll v[N];


void bt(){
    if(i == n){
        for(int j = 0; j < p.size(); j++){
            cout << p[j] << " ";
        }
        cout << "\n";
        ll cop = 0;
        for(int j = 0; j < p.size(); j++){
            cop += p[j];
        }
        if(abs(sum - cop - cop) <= mn){
            mn = abs(sum - cop - cop);
        }
        return;
    }

    i += 1;
    bt();
    i -= 1;
    
    p.push_back(v[i]);
    i += 1;
    bt();
    p.pop_back();
    i -= 1;
}


int main() {
   ios::sync_with_stdio(0);
   cin.tie(0), cout.tie(0);
   cin >> n;
   for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
   }
   bt();
   cout << mn << "\n";
   
   return 0;
}

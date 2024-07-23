#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

struct three{
   int x; // порядковые исходные номера
   int y; // элементы массива
   int z; // сумма добавленных конфет
};

void solve() {
    int n, k;
   vector<struct three> p;
    for(int i = 0; i < n; i++){
      int a;
      cin >> a;
       struct three b = { i, a, 0};
      p.push_back(b);
    }
    int cop = 0;
   if(n <= k){
      cop = n / k;
      for(int i = 0; i < n; i++){
         p[i].z += cop; 
      }
   }
   sort(all(p));
   int dif = n - cop * k;
   for(int i = 0; i < n; i++){
      p[i].z += dif;
      cout << p[i].z << " ";
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
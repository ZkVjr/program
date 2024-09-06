#include <bits/stdc++.h>
#include <iostream>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;

string fs(string str){
    vector<int> cnts;
    string snew = "";
    int cnt = 1;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == str[i + 1]){
            cnt++;
        } else{
            cnts.push_back(cnt);
            cnt = 1; 
            snew += str[i];
        }
    }
    
    return snew;
}
vector<int> cn(string str){
    vector<int> cn;
    int cnt = 1;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == str[i + 1]){
            cnt++;
        } else{
            cn.push_back(cnt);
            cnt = 1; 
        }
    }
    return cn;
}

void solve() {
    string s;
    string t;
    cin >> s >> t;
    if(s.size() > t.size()){
        cout << "No\n";
        return;
    }
    if(s == t){
        cout << "Yes\n";
        return;
    }
     vector<int> cnts;
     cnts = cn(s);
     string snew = fs(s);
    

    vector<int> cntt;
    cntt = cn(t);
    string tnew = fs(t);
   
    if(snew != tnew){
        cout << "No\n";
        return;
    }
    int count = 0;
    for(int i = 0; i < cnts.size(); i++){
        if(cnts[i] == cntt[i]){
            count++;
        }
        if(cnts[i] >= 2 && cntt[i] >= 2 && cnts[i] != cntt[i]){
            count++;
        }
    }
    
    if(count == cnts.size()){
        cout << "Yes\n";
        return;
    } else{
        cout << "No\n";
        return;   
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
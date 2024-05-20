#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int ans = v[i] - v[j];
            if(ans % 200 == 0){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}


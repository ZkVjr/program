#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    int mx = -999999999;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (mx < v[i]) {
            mx = v[i];
        }
    }
    vector<int> cnt(mx);
    for (int i = 0; i < n; i++) {
        cnt[v[i]]++;
    }
    for (int i = 0; i < mx; i++) {
        cout << cnt[i] << " ";
    }
}


int main() {
    solve();
}

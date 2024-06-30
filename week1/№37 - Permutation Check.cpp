#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<int> v1;
    for (int i = 1; i <= n; i++) {
        v1.push_back(i);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == v1[i]) {
            cnt++;
        }
        else {
            cout << "No" << endl;
            break;
        }
    }
    if (cnt == n) {
        cout << "Yes" << endl;
    }
}


int main() {
    solve();
}

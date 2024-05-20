
#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector <ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector <ll> pr_sum(n);
    pr_sum[0] = v[0];
    for (int i = 1; i < n; i++) {
        pr_sum[i] = v[i] + pr_sum[i - 1];
    }
    vector <ll> cnt(n);
    ll res = 0;
    for (int i = 0; i < n; i++) {
        res += cnt[pr_sum[i] - k];
        cnt[pr_sum[i]]++;
    }
    for (int i = 0; i < n; i++) {
        cout << cnt[i] << " ";
    }
}

int main() {
    solve();
}

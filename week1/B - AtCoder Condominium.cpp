
#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

void solve() {
    ll n, k;
    cin >> n >> k;
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (i * k * 100);
    }
    for (int i = 1; i <= k; i++) {
        sum += (i * n);
    }
    cout << sum << endl;
}

int main() {
    solve();
}

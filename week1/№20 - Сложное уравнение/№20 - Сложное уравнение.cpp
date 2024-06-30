#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == 0 && b != 0) {
        cout << "NO" << endl;
        return;
    }
    if (a == 0 && b == 0) {
        cout << "INF" << endl;
        return;
    }
    if (b % a != 0) {
        cout << "NO" << endl;
        return;
    }
    ll x = -b / a;
    if (c * x + d == 0) {
        cout << "NO" << endl;
    }
    else {
        cout << -b / a << endl;
    }
}
int main() {
    solve();
}
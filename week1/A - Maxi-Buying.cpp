#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    ll ans = n * 1.08;
    if (ans < 206) {
        cout << "Yay!" << endl;
    }
    if (ans == 206) {
        cout << "so-so" << endl;
    }
    if (ans > 206) {
        cout << ":(" << endl;
    }
}

int main() {
    solve();
}

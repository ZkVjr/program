
#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

void solve() {
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    int mn = min(a1, min(a2, a3));
    int mx = max(a1, max(a2, a3));
    int mid = a1 + a2 + a3 - mx - mn;
    if(mid - mn == mx - mid){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}

int main() {
    solve();
}

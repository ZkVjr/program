#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

void solve() {
    int a, b;
    cin >> a >> b;
    if (a * 6 >= b && b >= a) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}


int main() {
    solve();
}

#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b || ((a < b || a > b) && abs(a) == abs(b) && c % 2 == 0)) {
        cout << "=" << endl;
    }
    else {
        if (abs(a) > abs(b) && c % 2 == 0) {
            cout << ">" << endl;
        }
        if (abs(a) < abs(b)) {
            cout << "<" << endl;
        }
        if (a > b && c % 2 != 0) {
            cout << ">" << endl;
        }
        if (a < b && c % 2 != 0) {
            cout << "<" << endl;
        }
    }
}


int main() {
    solve();
}

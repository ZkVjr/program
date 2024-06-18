#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    int cnt = 0;
    int i = 0;
    while (n > cnt) {
        i++;
        cnt += i;
    }
    cout << i << endl;
}


int main() {
    solve();
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
struct mp {
    string fir;
    int sec;
};

bool cmp(mp x, mp y) {
    return x.sec < y.sec;
}

void solve() {
    int n;
    cin >> n;
    vector<mp>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].fir >> v[i].sec;
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[n - 2].fir << endl;
}


int main() {
    solve();
}

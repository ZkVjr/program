#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
struct mp {
    ll fir;
    ll sec;
};

bool cmp(mp x, mp y) {
    return x.fir < y.fir;
}

void solve() {
    ll n;
    cin >> n;
    ll k;
    cin >> k;
    vector<mp>v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i].fir >> v[i].sec;
    }
    ll cnt = 0;
    sort(v.begin(), v.end(), cmp);
        for (ll i = 0; i < n; i++) {
            if (i == 0) {
                if (k - v[i].fir >= 0) {
                    k -= v[i].fir;
                    k += v[i].sec;
                }
            }
            else {
                if (k - (v[i].fir - v[i - 1].fir) >= 0) {
                     k -= v[i].fir;
                     k += v[i].sec;
                 }
                 else {
                    cout << v[i - 1].fir + k << endl;
                    cnt = -1;
                    break;
                  }
            }
            
        }
        if (cnt == 0) {
            cout << v[n - 1].fir + k << endl;
        }
    }


int main() {
    solve();
}

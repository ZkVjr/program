#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

void solve() {
    int p;
    cin >> p;
    int cnt = 0;
    vector<int> v{ 3628800, 362880, 40320, 5040, 720, 120, 24, 6, 2, 1};
    int cop = p;
    for (int i = 0; i < 10; i++) {
        while (p >= v[i]) {
            p -= v[i];
            cnt++;
       }
    }

    
    cout << cnt << endl;
}


int main() {
    solve();
}

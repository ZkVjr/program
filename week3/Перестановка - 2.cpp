#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iomanip>

#define  sec second
#define fir first
#define int long long
using namespace std;

// if (p1.x != p2.x) return p1.x < p2.x;
//if (p1.y != p2.y) return p1.y < p2.y;
//return p1.z < p2.z;
//

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << n + 1 << endl;
    }
    else {
        cout << n - 1 << endl;
    }
    return 0;
}
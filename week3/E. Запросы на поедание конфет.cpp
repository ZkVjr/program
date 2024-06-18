#include<iostream>
#include <vector>
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
    int tt;
    cin >> tt;
    while (tt--) {
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < q; i++) {
            int z;
            cin >> z;
            if (z > sum) {
                cout << -1 << endl;
            }
            if (z == sum) {
                cout << n << endl;
            }
            if (z < sum) {
                int cnt = 0;
                for (int i = n - 1; i >= 0; i--) {
                    cnt++;
                    z -= v[i];
                    if (z <= 0) {
                        cout << cnt << endl;
                        break;
                    }

                }
            }
        }
    }

}
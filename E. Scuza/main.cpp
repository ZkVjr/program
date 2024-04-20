#include<bits/stdc++.h>

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
        int n, q; // количество ступенек и количество запросов,
        cin >> n >> q;
        vector<int> v(n);
        int mx = -999999999999999999;
        int mxi = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i]; // разницы в высотах ступенек
            if (mx < v[i]) {
                mx = v[i];
                mxi = i;
            }
        }
        vector<int> pr_sum(1);
        pr_sum[0] = v[0];
        for (int i = 1; i < n; i++) {
            pr_sum[i] = pr_sum[i - 1] + v[i];
            pr_sum.push_back(pr_sum[i]);

        }
        for (int i = 0; i < q; i++) {
            int l = 0, r = mxi;
            int a;
            cin >> a; // длина ног
            if (a == 0) {
                cout << 0 << " ";
            } else {
                if (a >= mx) {
                    cout << pr_sum[n - 1] << " ";
                } else {
                    while (l + 1 < r) {
                        int m = (l + r) / 2;
                        if (v[m] > a) {
                            r = m;
                        } else {
                            l = m;
                        }
                    }
                    cout << pr_sum[l] << " ";
                }
            }
        }
    }
    return 0;
}
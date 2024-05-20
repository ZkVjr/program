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
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        if (x > v[n - 1]) {
            cout << 0 << endl;
        }
        else {
            int l = 0, r = n - 1;
             while (r - l > 1) {
                 int mid = (l + r) / 2;
                 if (v[mid] >= x) {
                         r = mid;
                  }
                  else {
                     l = mid;
                   }
      
            }
        cout << n - r << endl;
        }
        
    }
    

}

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
    int d, m, y;
    char c = '/';
    cin >> d >> c >> m >> c >> y;
    int cnt = d + 1;
    vector<int> v1;
    cout << d;
    cout << '/';
    vector<char> v2;
    while (m > 0) {
        if (m % cnt <= 9) {
            char a = (m % cnt) + '0';
            v2.push_back(a);
        }
        else {
            int sim = (m % cnt) - 9;
            char a = 'A' + sim;
            v2.push_back(a);
        }

        m /= cnt;
    }
    for (int i = v2.size() - 1; i >= 0; i--) {
        cout << v2[i];
    }
    cout << '/';
    vector<char> v3;
    while (y > 0) {
        if (y % cnt <= 9) {
            v3.push_back((y % cnt) + '0');
        }
        else {
            int sim = (y % cnt) - 9;
            char a = 'A' + sim;
            v3.push_back(a);
        }
        y /= cnt;
    }
    for (int i = v3.size() - 1; i >= 0; i--) {
        cout << v3[i];
    }
    return 0;
}
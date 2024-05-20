
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> tot;
    vector<int> N(n);
    for (int i = 0; i < n; i++) {
        cin >> N[i];
        tot.push_back(N[i]);
    }
    vector<int> M(m);
    for (int i = 0; i < m; i++) {
        cin >> M[i];
        tot.push_back(M[i]);
    }
    sort(tot.begin(), tot.end());
    int mn = 999999999;
    for (int i = 0; i < n + m - 1; i++) {
        if (abs(tot[i] - tot[i + 1]) < mn) {
            mn = abs(tot[i] - tot[i + 1]);
        }
        if (mn == 0) {
            cout << mn << endl;
            return 0;
        }
    }
    cout << mn << endl;
}


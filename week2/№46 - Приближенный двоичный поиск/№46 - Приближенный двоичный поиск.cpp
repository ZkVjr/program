#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, x, l, r;
    cin >> n;
    int k;
    cin >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int j = 0; j < k; j++) {
        l = 0;
        r = n - 1;
        cin >> x;
        while (l < r) {
            if (v[(l + r) / 2] < x) {
                l = (l + r) / 2 + 1;
            }
            else {
                r = (l + r) / 2;
            }
        }
        if (v[l] > x)
            l = l - 1;
        if (v[0] >= x)
            cout << v[0] << endl;
        else if (v[n - 1] <= x)
            cout << v[n - 1] << endl;
        else if (abs(v[r] - x) < abs(v[l] - x))
            cout << v[r] << endl;
        else
            cout << v[l] << endl;
    }

    return 0;
}
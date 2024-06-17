#include <iostream>
#include <vector>
#include<iomanip>
#include<algorithm>
#include<string>
#include<cmath>

#define all(x) (x).begin(), x.end()
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	long long n;
	cin >> n;
	for (int i = 0; i < 998244353; i++) {
		if ((n - i) % 998244353 == 0) {
			cout << i << "\n";
			break;
		}
		
	}
	return 0;
}
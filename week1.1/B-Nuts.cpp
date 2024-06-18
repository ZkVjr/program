
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
void solve(){
	ll n;
	cin >> n;
	ll sum = 0;
	for (int i = 0; i < n; i++) {
		ll nuts;
		cin >> nuts;
		if (nuts > 10) {
			sum += (nuts - 10);
		}
	}
	cout << sum << endl;
}
int main()
{
	solve();
}

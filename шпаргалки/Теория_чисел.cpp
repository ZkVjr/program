#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// O(x^0.5)
bool checkPime(int x) {
    if (x == 1) {
        return false;
    }
    for (int i = 2; i*i <= x; ++i) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

const int A = 1e7;

int mindiv[A];
vector<int> primes;

// O(AloglogA)
void eratos() {
    fill_n(mindiv, A, A);
    for (ll i = 2; i < A; ++i) {
        if (mindiv[i] != A) {
            continue;
        }
        mindiv[i] = i;
        primes.push_back(i);
        for (ll j = i*i; j < A; j += i) {
            mindiv[j] = min<ll>(mindiv[j], i);
        }
    }
}

// O(x^0.5)
vector<int> factorization(int x) {
    vector<int> f;
    for (int i = 2; i*i <= x; ++i) {
        while (x % i == 0) {
            f.push_back(i);
            x /= i;
        }
    }
    if (x > 1) {
        f.push_back(x);
    }
    return f;
}

// O(pi(x^0.5)) ~ O(x^0.5 / logx)
vector<int> factorizationWithPrimes(int x) {
    vector<int> f;
    for (int i : primes) {
        if (i*i > x) {
            break;
        } 
        while (x % i == 0) {
            f.push_back(i);
            x /= i;
        }
    }
    if (x > 1) {
        f.push_back(x);
    }
    return f;
}

// O(logx)
vector<int> factorization_fast(int x) {
    vector<int> f;
    while (x > 1) {
        f.push_back(mindiv[x]);
        x /= mindiv[x];
    }
    return f;
}

// x = p1^l1 * p2^l2 * ...
/*
    example:
    f = {2, 3, 5, 5, 2, 3, 3, 3, 2}
    sort
    f = {2, 2, 2, 3, 3, 3, 3, 5, 5}
    res={(2, 3), (3, 4), (5, 2)}
*/
vector<pair<int, int>> convert(vector<int> f) {
    sort(f.begin(), f.end());
    vector<pair<int, int>> res;
    for (int i = 0; i < f.size();) {
        int j = i;
        while (j < f.size() && f[i] == f[j]) {
            ++j;
        }
        res.emplace_back(f[i], j - i);
        i = j;
    }
    return res;
}

// Модульная арифметика

const int mod = 1e9 + 7;

int sum(int x, int y) {
    return (x += y) < mod ? x : x - mod;
}

int diff(int x, int y) {
    return (x -= y) < 0 ? x + mod : x;
}

int mult(int x, int y) {
    return (ll)x*y%mod;
}

// O(log(mod))
int bpow(int x, int y) {
    if (!y) {
        return 1;
    }
    if (y & 1) {
        return mult(x, bpow(x, y - 1));
    }
    return bpow(mult(x, x), y >> 1);
}

int inv(int x) {
    return bpow(x, mod - 2);
}

int mdiv(int x, int y) {
    return mult(x, inv(y));
}

// O(факторизация + log(m)*loglog(m))
int phi(int m) {
    // phi(m) = m*(1 - 1/p1)*(1 - 1/p2)*..
    auto f = factorization(m);
    sort(f.begin(), f.end());
    f.erase(unique(f.begin(), f.end()), f.end());

    // 3 2 1 1 1 2 3
    // 1 1 1 2 2 3 3
    // 1 2 3 [1 1 2 3]
    // 1 2 3

    int res = m;
    for (int p : f) {
        // *= (1 - 1/p) 
        // *= (p - 1)/p

        // порядок важен (избегаем переполнения)
        res /= p;
        res *= p - 1;
    }
    return m;
}

// O( log{min(a, b)/gcd(a, b)} )
int gcd(int a, int b) {
    if (!b) {
        return a;
    }
    return gcd(b, a % b);
}

// Расширенный Евклид
// ax + by = gcd(a, b)
int gcd_extendet(int a, int b, int& x, int& y) {
    if (!b) {
        // a*1 + b*0 = a
        x = 1;
        y = 0;
        return a;
    }
    int x0, y0;
    int res = gcd_extendet(b, a % b, x0, y0);
    x = y0;
    y = x0 - y0*(a/b);
    return res;
}

const int N = 1e6;

int fact[N], ifact[N];

// O(N + log(mod))
void prepare() {
    fact[0] = 1;
    for (int i = 1; i < N; ++i) {
        fact[i] = mult(i, fact[i - 1]);
    }
    // 1/i! = (i + 1)/(i + 1)!
    ifact[N - 1] = inv(fact[N - 1]); // O(log)
    for (int i = N - 2; i >= 0; --i) {
        ifact[i] = mult(i + 1, ifact[i + 1]);    
    }
}

// O(1)
int C(int n, int k) {
    // n!/(k!*(n - k)!)
    return mult(fact[n], mult(ifact[k], ifact[n - k]));
}

const int K = 60;

ll c[K][K];
void preapare_binom() {
    c[0][0] = 1;
    for (int i = 1; i < K; ++i) {
        c[i][0] = c[i][i] = 1;
        for (int j = 1; j < i; ++j) {
            c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
        }
    }
}

int main() {
}

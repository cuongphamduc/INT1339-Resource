#include <bits/stdc++.h>

#define FOR(x, a, b) for (int x = a; x <= b; x++)
#define FORD(x, a, b) for (int x = a; x >= b; x--)
#define REP(x, a, b) for (int x = a; x < b; x++)
#define fi first
#define se second
#define ll long long
#define pb push_back

using namespace std;

typedef pair < int , int > ii;

ll mod = 1000000009;

ll pows(ll n) {
    ll res = 1, p = 2;
    while(n) {
        if (n % 2) {
            res = res * p % mod;
        }
        p = p * p % mod;
        n /= 2;
    }
    return res;
}

ll cal(ll n, ll k) {
    return (n % k + (pows(n / k + 1) - 2) * k);
}

main() {
  	ll n, m, k, res = 0;
    cin >> n >> m >> k;
    if ((n - m) * k >= n) {
        res = m;
    }
	else {
        res = (n - m) * (k - 1) + cal(n - (n - m) * k, k);
    }
    cout << (res + mod) % mod;
}


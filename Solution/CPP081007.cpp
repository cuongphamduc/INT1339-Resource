#include <bits/stdc++.h>

#define FOR(x, a, b) for (int x = a; x <= b; x++)
#define FORD(x, a, b) for (int x = a; x >= b; x--)
#define REP(x, a, b) for (int x = a; x < b; x++)
#define ll long long

using namespace std;

ll tcs(ll x) {
	ll res = 0;
	while (x != 0) {
		res += x % 10;
		x /= 10;
	}
	return res;
}

ll pows(ll x, ll a) {
	ll res = 1;
	FOR(i, 1, a) {
		res *= x;
	}
	return res;
}

main() {
	ios::sync_with_stdio(false);
	ll a, b, c;
	set < ll > s;
	cin >> a >> b >> c;
	FOR(i, 0, 81) {
		ll tmp = b * pows(i, a) + c;
		if (tmp >= 0 && tmp < 1000000000 && tcs(tmp) == i) {
			s.insert(tmp);
		}
	}
	cout << s.size() << endl;
	for (set < ll > :: iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
}



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

ll n, k;

set < ll > s;

main() {
	ios::sync_with_stdio(false);
	cin >> n >> k;
	for (ll i = 1; i <= k; i++) {
		if (s.count(n % i)) {
			cout << "No";
			return 0;
		}
		s.insert(n % i);
	}
	cout << "Yes";
}



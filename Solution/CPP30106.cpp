#include <bits/stdc++.h>

#define FOR(x, a, b) for (int x = a; x <= b; x++)
#define FORD(x, a, b) for (int x = a; x >= b; x--)
#define REP(x, a, b) for (int x = a; x < b; x++)
#define ll long long

using namespace std;

ll a[1000001], n;

map < ll, ll > m;

main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	FOR(i, 1, n) {
		cin >> a[i];
		m[a[i]]++;
	}
	FOR(i, 1, n) {
		cout << m[a[i]] << endl;
	}
}


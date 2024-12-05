#include <bits/stdc++.h>

#define FOR(x, a, b) for (int x = a; x <= b; x++)
#define FORD(x, a, b) for (int x = a; x >= b; x--)
#define REP(x, a, b) for (int x = a; x < b; x++)
#define ll long long

using namespace std;

int a[100001], b[100001], m = 2, n;

main() {
	cin >> n;
	FOR(i, 1, n) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	b[1] = a[1];
	FOR(i, 2, n) {
		if (a[i] != a[i - 1]) {
			b[m++] = a[i];
		}
	}
	if (m - 1 > 3) {
		cout << "NO";
	}
	else {
		if (m - 1 < 3) {
			cout << "YES";
		}
		else {
			if (b[2] - b[1] == b[3] - b[2]) {
				cout << "YES";
			}
			else {
				cout << "NO";
			}
		}
	}
}


#include <bits/stdc++.h>

#define FOR(x, a, b) for (int x = a; x <= b; x++)
#define FORD(x, a, b) for (int x = a; x >= b; x--)
#define REP(x, a, b) for (int x = a; x < b; x++)
#define ll long long

using namespace std;

string toString(ll a) {
	string s = "";
	while (a != 0) {
		s = char(a % 10 + '0') + s;
		a/= 10;
	}
	return s;
}

main() {
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	int res = 0;
	while(s.length() != 1) {
		res++;
		ll len = s.length(), summ = 0;
		REP(i, 0, len) {
			summ += (s[i] - '0');
		}
		s = toString(summ);
	}
	cout << res;
}



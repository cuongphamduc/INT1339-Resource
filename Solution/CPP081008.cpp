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

bool cmp(string a, string b) {
	string a1 = a, b1 = b;
	while (a1.size() > b1.size()) {
		b1 = "0" + b1;
	}
	while (a1.size() < b1.size()) {
		a1 = "0" + a1;
	}
	return a1 < b1;
}

main() {
	ios::sync_with_stdio(false);
	string s[1001];
	int n;
	cin >> n;
	FOR(i, 1, n) {
		cin >> s[i];
	}
	sort(s + 1, s + n + 1, cmp);
	cout << s[1];
}


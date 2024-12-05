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

string s, u = "";
stack < char > t;
int f[100001];

void init() {
	f[s.size()] = (int)'z' + 1;
	FORD(i, s.size() - 1, 0) {
		f[i] = min(f[i + 1], int(s[i]));
	}
}

main() {
  	cin >> s;
  	init();
  	FOR(i, 0, s.size() - 1) {
  		t.push(s[i]);
  		if (i == s.size() - 1) {
  			while (!t.empty()) {
  				u += t.top();
  				t.pop();
			}
			break;
		}
  		while (t.top() <= f[i + 1]) {
  			u += t.top();
  			t.pop();
  			if (t.empty()) {
  				break;
			}
		}
	}
	cout << u;
}


#include <bits/stdc++.h>

#define FOR(x, a, b) for (int x = a; x <= b; x++)
#define FORD(x, a, b) for (int x = a; x >= b; x--)
#define REP(x, a, b) for (int x = a; x < b; x++)
#define ll long long

using namespace std;

string s;
string src[6] = {"RGB", "RBG", "BGR", "BRG", "GRB", "GBR"};

int cal(string n) {
	if (s.size() < n.size()) {
		return -1;
	}
	else {
		if (s == n) {
			return 0;
		}
		else {
			if (s.substr(0, n.size()) == n || s.substr(s.size() - n.size()) == n) {
				return 1;
			}
			else {
				REP(i, 0, s.size() - n.size()) {
					if (s.substr(i, n.size()) == n) {
						return 2;
					}
				}
				return -1;
			}
		}
	}
}

main() {
	ios::sync_with_stdio(false);
	int res = 1000000009;
	cin >> s;
	FOR(i, 0, 5) {
		if (cal(src[i]) != -1) {
			res = min(res, cal(src[i]));
		}
		else {
			if (cal(src[i].substr(0, 2)) != -1 && cal(src[i].substr(2)) != -1) {
				res = min(res, cal(src[i].substr(0, 2)) + cal(src[i].substr(2)));
			}
			else {
				if (cal(src[i].substr(0, 1)) != -1 && cal(src[i].substr(1)) != -1) {
					res = min(res, cal(src[i].substr(0, 1)) + cal(src[i].substr(1)));
				}
				else {
					if (cal(src[i].substr(0, 1)) != -1 && cal(src[i].substr(1, 1)) != -1 && cal(src[i].substr(2, 1)) != -1) {
						res = min(res, cal(src[i].substr(0, 1)) + cal(src[i].substr(1, 1)) + cal(src[i].substr(2, 1)));
					}
					else {
						string tmp = src[i].substr(0, 1) + src[i].substr(2);
						res = min(res, cal(tmp) + cal(src[i].substr(1, 1)));
					}
				}
			}
		}
	}
	cout << res << endl;
}


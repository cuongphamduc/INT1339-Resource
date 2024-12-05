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


main() {
  	int n, tmp;
	ll res = 0;
	priority_queue < int > q;
	cin >> n >> tmp;
	q.push(tmp);
	FOR(i, 1, n - 1) {
		cin >> tmp;
		tmp -= i;
		q.push(tmp);
		if (q.top() > tmp) {
			res += q.top() - tmp;
			q.pop();
			q.push(tmp);
		}
	}
	cout << res;
}


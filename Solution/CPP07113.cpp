#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double pi = 3.14159265358979;

main() {
	ios::sync_with_stdio(false);
	int t, n, r, x[10001], y[10001];
	cin >> t;
	double f, c;
	while (t--) {
		c = 0;
		cin >> r >> n;
		for (int i = 1; i <= n; i++) {
			cin >> x[i] >> y[i];
			if (i > 1) {
				c += sqrt((x[i] - x[i - 1]) * (x[i] - x[i - 1]) + (y[i] - y[i - 1]) * (y[i] - y[i - 1]));
			}
		}
		c += sqrt((x[n] - x[1]) * (x[n] - x[1]) + (y[n] - y[1]) * (y[n] - y[1]));
		f = 1 - (2 * pi * r) / c;
		if (f > 0) {
			cout << fixed << setprecision(6) << f << endl;
		}
		else {
			cout << "Not possible" << endl;
		}
	}
}


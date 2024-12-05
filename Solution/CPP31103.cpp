#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int n, k, vt1, vt2;
	string s;
	cin >> n >> k >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'G') {
			vt1 = i;
		}
		if (s[i] == 'T') {
			vt2 = i;
		}
	}
	if (vt1 == vt2) {
		cout << "YES";
		return 0;
	}
	if ((int)fabs(vt2 - vt1) % k == 0) {
		if (vt1 > vt2) {
			for (int i = vt2; i <= vt1; i++) {
				if (s[i] == '#' && (i - vt1) % k == 0) {
					cout << "NO";
					return 0;
				}
			}
			cout << "YES";
		}
		else {
			for (int i = vt1; i <= vt2; i++) {
				if (s[i] == '#' && (i - vt1) % k == 0) {
					cout << "NO";
					return 0;
				}
			}
			cout << "YES";
		}
	}
	else {
		cout << "NO";
	}
	return 0;
}


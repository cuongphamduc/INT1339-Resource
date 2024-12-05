#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    if (2 * a <= b)
        cout << n * a << endl;
    else
        cout << (n / 2) * b + (n % 2) * a << endl;
}

int main() {
    FAST_IO;
    int TC;
    cin >> TC;
    while (TC--) 
        solve();
    return 0;
}


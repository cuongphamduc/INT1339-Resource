#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;
 
void solve()
{
    ll a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
 
    if (a1 == 0)
        cout << 1 << nline;
    else
        cout << a1 + min(a2, a3) * 2 + min(a1 + 1, abs(a2 - a3) + a4) << nline;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }
 
}


#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;
 
void solve()
{
    ll n, k;
    cin >> n >> k;
 
    if (k < 40 and n >= 1ll << k) 
    {
        cout << (1ll << k) << nline;
        return;
    }
    cout << n + 1 << nline;
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

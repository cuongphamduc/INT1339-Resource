#include <stdio.h>

#define FOR(x, a, b) for (int x = a; x <= b; x++)
#define ll long long

int main() {
    ll n, a = 0, b = 1, c;
    scanf("%lld", &n);
    FOR(i, 0, 87) {
        c = a + b;
        a = b;
        b = c;
        if (b > n) {
            printf("%d\n", i - 1);
            return 0;
        }
    }
    return 0;
}



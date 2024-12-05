#include <stdio.h>
#include <stdlib.h>

#define FOR(x, a, b) for (int x = a; x <= b; ++x)
#define FOD(x, a, b) for (int x = a; x >= b; --x)
#define REP(x, a, b) for (int x = a; x < b; ++x)
#define ll long long

typedef struct {
    int fi;
    ll se;
} ill;

int n, d;
ill a[100001];

int compare(const void *a, const void *b) {
    ill *ia = (ill *)a;
    ill *ib = (ill *)b;
    return ia->fi - ib->fi;
}

int lower_bound(ill arr[], int n, ill val) {
    int l = 1, r = n + 1, mid;
    while (l < r) {
        mid = (l + r) / 2;
        if (arr[mid].fi < val.fi)
            l = mid + 1;
        else
            r = mid;
    }
    return l;
}

int main() {
    scanf("%d %d", &n, &d);
    FOR(i, 1, n) {
        scanf("%d %lld", &a[i].fi, &a[i].se);
    }

    qsort(a + 1, n, sizeof(ill), compare);

    FOR(i, 1, n) {
        a[i].se += a[i - 1].se;
    }

    ll res = 0;
    FOR(i, 1, n) {
        int x = lower_bound(a, n, (ill){a[i].fi + d, 0});
        res = (res > (a[x - 1].se - a[i - 1].se)) ? res : (a[x - 1].se - a[i - 1].se);
    }

    printf("%lld\n", res);
    return 0;
}

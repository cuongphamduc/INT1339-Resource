#include <stdio.h>
#include <stdlib.h>

long long C(int n, int k) {
    long long res = 1;
    for (int i = n - k + 1; i <= n; i++) res *= i;
    for (int i = 2; i <= k; i++) res /= i;
    return res;
}

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int a[100000];

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    qsort(a, n, sizeof(int), compare);

    int i;
    for (i = 3; i < n && a[i] == a[2]; i++);

    int cnt = i, chs = 3;
    if (a[0] != a[2]) cnt--, chs--;
    if (a[1] != a[2]) cnt--, chs--;

    printf("%lld\n", C(cnt, chs));

    return 0;
}



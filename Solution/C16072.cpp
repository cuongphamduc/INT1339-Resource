#include <stdio.h>

#define LL long long

int main() {
    // freopen("in.inp", "r", stdin);
    // freopen("out.out", "w", stdout);
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++) {
        int n;
        scanf("%d", &n);
        int number = 1, chuso = 1;
        while (number % n != 0) {
            int du = number % n;
            number = du * 10 + 1;
            chuso++;
        }
        printf("%d\n", chuso);
    }
    return 0;
}



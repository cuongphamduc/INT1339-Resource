#include <stdio.h>

int countZeroBits(long long n) {
    int count = 0;
    while (n != 0) {
        if ((n & 1) == 0) {
            count++;
        }
        n >>= 1;
    }
    return count;
}

long long solve(long long n) {
    int count = countZeroBits(n);
    return 1LL << count;
}

int main() {
    long long n;
    scanf("%lld", &n);

    long long result = solve(n);

    printf("%lld\n", result);

    return 0;
}



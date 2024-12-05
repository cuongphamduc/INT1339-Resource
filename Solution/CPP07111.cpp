#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>

using namespace std;
typedef unsigned long long ull;

const ull INF = 1e18;
const int primesArray[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
const vector<int> primes(primesArray, primesArray + sizeof(primesArray) / sizeof(primesArray[0]));


void backtrack(int idx, int divisors, ull currentNum, ull &minNum, vector<int> &exponents) {
    if (divisors == 1) {
        minNum = min(minNum, currentNum);
        return;
    }
    if (idx >= primes.size()) return;
    
    ull power = 1;
    for (int e = 1; e < 64; ++e) {
        power *= primes[idx];
        if (power > INF / currentNum) break;
        exponents.push_back(e);
        if (divisors % (e + 1) == 0)
            backtrack(idx + 1, divisors / (e + 1), currentNum * power, minNum, exponents);
        exponents.pop_back();
    }
}

ull solve(int N) {
    ull minNum = INF;
    vector<int> exponents;
    backtrack(0, N, 1, minNum, exponents);
    return minNum;
}

int main() {
    int N;
    cin >> N;
    cout << solve(N) << endl;
    return 0;
}

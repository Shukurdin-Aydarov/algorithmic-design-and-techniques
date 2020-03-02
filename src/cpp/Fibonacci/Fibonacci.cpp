#include <vector>
#include "Fibonacci.h"

using std::vector;

int64_t Fibonacci::Efficient(int n) {
    if (n == 0) return 0;

    int64_t fn2 = 0;
    int64_t fn1 = 1;

    for (int i = 2; i <= n; i++) {
        int64_t temp = fn1;
        fn1 = fn1 + fn2;
        fn2 = temp;
    }

    return fn1;
}

int64_t Fibonacci::Naive(int n) {
    if (n <= 1) return n;

    return Naive(n - 1)  + Naive(n - 2);
}
 
int Fibonacci::LastDigitOfLargeFibonacciNumber(int n) {
    return Efficient(n) % 10;
}
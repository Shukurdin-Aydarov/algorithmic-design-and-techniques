#include <iostream>
#include "Fibonacci.h"

void StressTest(int);

int main()
{
    StressTest(999);
}

void StressTest(int max) {
    Fibonacci f = Fibonacci();
    printf("%10s|%6s|%16s|%16s|\n", "Status", "N", "Recursive", "Iterative");
    printf("----------------------------------------------------------\n");
    while (true)
    {
        int n = 1 + rand() % max;

        int naive = f.Naive(n);
        int efficient = f.Efficient(n);


        if (naive == efficient) {
            printf("%10s|%6i|%16i|%16i|\n", "Success", n, naive, efficient);
        }
        else
        {
            printf("%10s|%6i|%16i|%16i|\n", "Fail", n, naive, efficient);
            return;
        }
    }
}
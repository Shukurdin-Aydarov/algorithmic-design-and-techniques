#include <iostream>
#include "Gcd.h"

using namespace std;

void StressTest(int);

int main()
{
    StressTest(10000000);
}

void StressTest(int max) {
    Gcd gcd = Gcd();
    printf("%10s|%12s|%12s|%10s|%10s|\n", "Status", "a", "b", "naive", "efficient");
    printf("--------------------------------------------------------------\n");
    while (true)
    {
        int a = 1 + rand() % max;
        int b = 1 + rand() % max;

        int naive = gcd.Naive(a, b);
        int efficient = gcd.Efficient(a, b);
               
        
        if (naive == efficient) {
            printf("%10s|%12i|%12i|%10i|%10i|\n", "Success", a, b, naive, efficient);
        }
        else
        {
            printf("%10s|%12i|%12i|%10i|%10i|\n", "Fail", a, b, naive, efficient);
            return;
        }
    }
}
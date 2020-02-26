#include <iostream>
#include <vector>
#include "MaxPairwiseProduct.h"

using std::vector;
using std::string;

void StressTest(int);

int main()
{
    StressTest(100);
}

void StressTest(int length) {
    MaxPairwiseProduct mpp = MaxPairwiseProduct();
    printf("%10s|%16s|%16s|\n", "Status", "Naive", "Efficient");
    while (true)
    {
        printf("\n-------------------------------------------\n");

        vector<int> numbers = vector<int>(length);
        for (int i = 0; i < length; i++)
            numbers[i] = 1 + rand() % INT32_MAX;

        int naive = mpp.Naive(numbers);
        int efficient = mpp.Efficient(numbers);
        printf("Array of numbers: ");
        for (int i = 0; i < length; i++)
            printf("%d ", numbers[i]);

        printf("\n");
        
        if (naive == efficient) {
            printf("%10s|%16i|%16i|\n", "Success", naive, efficient);
        }
        else
        {
            printf("%10s|%16i|%16i|\n", "Fail", naive, efficient);
            return;
        }
    }
}

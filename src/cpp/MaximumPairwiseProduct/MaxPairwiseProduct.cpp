#include <algorithm>
#include "MaxPairwiseProduct.h"

int64_t MaxPairwiseProduct::Naive(const vector<int>& numbers) {
	int64_t product = 0;
	int length = numbers.size();
	for (int i = 0; i < length; ++i) {
		for (int j = i + 1; j < length; ++j) {
			int64_t mul = (int64_t)numbers[i] * numbers[j];
			product = std::max(product, mul);
		}
	}
	return product;
}

int64_t MaxPairwiseProduct::Efficient(const vector<int>& numbers) {
	int length = numbers.size();
	int firstMaxIndex = 0;
	for (int i = 0; i < length; ++i) {
		if (numbers[firstMaxIndex] < numbers[i]) {
			firstMaxIndex = i;
		}
	}

	int secondMaxIndex = firstMaxIndex == 0 ? 1 : 0;
	for (int i = 0; i < length; ++i) {
		if (i != firstMaxIndex && numbers[secondMaxIndex] < numbers[i]) {
			secondMaxIndex = i;
		}
	}

	return (int64_t)numbers[firstMaxIndex] * numbers[secondMaxIndex];
}
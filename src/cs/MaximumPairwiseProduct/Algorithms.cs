namespace MaximumPairwiseProduct
{
    public static class Algorithms
    {
        public static long NaiveMaximumPairwiseProduct(int[] numbers)
        {
            long product = 0;

            for (var i = 0; i < numbers.Length; ++i)
                for (var j = i + 1; j < numbers.Length; j++)
                    product = Max(product, numbers[i] * numbers[j]);

            return product;
        }

        public static long FastMaximumPairwiseProduct(int[] numbers)
        {
            int firstMaxIndex = 0;
            for(var i = 1; i < numbers.Length; i++)
            {
                if (numbers[firstMaxIndex] < numbers[i])
                    firstMaxIndex = i;
            }

            int secondMaxIndex = firstMaxIndex == 0 ? 1 : 0;
            for(var i = 0; i < numbers.Length; i++)
            {
                if (firstMaxIndex != i && numbers[secondMaxIndex] < numbers[i])
                    secondMaxIndex = i;
            }

            return (long)numbers[firstMaxIndex] * numbers[secondMaxIndex];
        }

        private static long Max(long left, long right)
        {
            return left > right ? left : right;
        }
    }
}

using System;

namespace MaximumPairwiseProduct
{
    class Program
    {
        static int[] Small = new[] { 5, 6, 2, 7, 4 };
        static int[] Large = new[] { 5000, 60000, 20000, 100000, 900000 };
        static void Main(string[] args)
        {
            //Console.WriteLine("Native with large digits: {0}", Algorithms.NaiveMaximumPairwiseProduct(Large));
            Console.WriteLine("Fast with large digits: {0}", Algorithms.FastMaximumPairwiseProduct(Large));
        }
    }
}

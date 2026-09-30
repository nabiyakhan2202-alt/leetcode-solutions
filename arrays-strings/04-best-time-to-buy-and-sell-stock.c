#include <stdio.h>

int maxProfit(int prices[], int n)
{
    int minPrice = prices[0];
    int maxProfit = 0;
    int i;

    for (i = 1; i < n; i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }

        if (prices[i] - minPrice > maxProfit)
        {
            maxProfit = prices[i] - minPrice;
        }
    }

    return maxProfit;
}

int main()
{
    // Test Case 1: Typical case
    int prices1[] = {7, 1, 5, 3, 6, 4};

    printf("Test Case 1:\n");
    printf("Maximum Profit: %d\n", maxProfit(prices1, 6));

    // Test Case 2: Edge case - no profit
    int prices2[] = {7, 6, 4, 3, 1};

    printf("\nTest Case 2:\n");
    printf("Maximum Profit: %d\n", maxProfit(prices2, 5));

    return 0;
}

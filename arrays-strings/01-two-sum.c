#include <stdio.h>

void twoSum(int nums[], int n, int target)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("Indices: %d %d\n", i, j);
                return;
            }
        }
    }

    printf("No pair found\n");
}

int main()
{
    // Test Case 1: Typical case
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int n1 = 4;

    printf("Test Case 1:\n");
    twoSum(nums1, n1, target1);

    // Test Case 2: Edge case with duplicate values
    int nums2[] = {3, 3};
    int target2 = 6;
    int n2 = 2;

    printf("\nTest Case 2:\n");
    twoSum(nums2, n2, target2);

    return 0;
}
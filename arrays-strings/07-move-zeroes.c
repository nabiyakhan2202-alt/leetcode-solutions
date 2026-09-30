#include <stdio.h>

void moveZeroes(int nums[], int numsSize)
{
    int i;
    int j = 0;
    int temp;

    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j++;
        }
    }
}

int main()
{
    // Test Case 1
    int nums1[] = {0, 1, 0, 3, 12};

    moveZeroes(nums1, 5);

    printf("Test Case 1:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", nums1[i]);
    }

    // Test Case 2 - Edge case
    int nums2[] = {0};

    moveZeroes(nums2, 1);

    printf("\n\nTest Case 2:\n");
    for (int i = 0; i < 1; i++)
    {
        printf("%d ", nums2[i]);
    }

    printf("\n");

    return 0;
}
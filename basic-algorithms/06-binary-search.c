#include <stdio.h>

int search(int nums[], int numsSize, int target)
{
    int left = 0;
    int right = numsSize - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    // Test Case 1
    int nums1[] = {-1, 0, 3, 5, 9, 12};

    printf("Test Case 1:\n");
    printf("Index: %d\n", search(nums1, 6, 9));

    // Test Case 2 - Edge case
    int nums2[] = {5};

    printf("\nTest Case 2:\n");
    printf("Index: %d\n", search(nums2, 1, 2));

    return 0;
}
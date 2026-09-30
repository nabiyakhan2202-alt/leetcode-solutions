# Binary Search

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/binary-search/

## Approach

I used binary search on the sorted array. I checked the middle element with the target. If the middle element was smaller, I searched the right half. If it was larger, I searched the left half. If the element was found, I returned its index.

## Complexity

- Time: O(log n)
- Space: O(1)

## Notes

I learned how binary search reduces the search area by half in every step.
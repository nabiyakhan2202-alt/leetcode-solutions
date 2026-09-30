# Move Zeroes

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/move-zeroes/

## Approach

I used a pointer to keep track of the position where the next non-zero element should be placed. Whenever I found a non-zero element, I swapped it with the element at that position.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

I learned how to move all zeroes to the end of an array while keeping the relative order of the non-zero elements.
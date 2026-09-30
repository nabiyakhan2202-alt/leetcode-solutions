# Best Time to Buy and Sell Stock

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

I kept track of the minimum price seen so far while going through the array. For each price, I calculated the possible profit by subtracting the minimum price from the current price. I stored the maximum profit found.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

I learned how to find the maximum possible profit by keeping track of the lowest buying price while scanning the prices once.
# Valid Parentheses

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/valid-parentheses/

## Approach

I used a stack to store opening brackets. Whenever a closing bracket was found, I checked whether it matched the most recently added opening bracket. If it did not match, the string was invalid. At the end, the stack must be empty for the string to be valid.

## Complexity

- Time: O(n)
- Space: O(n)

## Notes

I learned how a stack can be used to match opening and closing brackets in the correct order.
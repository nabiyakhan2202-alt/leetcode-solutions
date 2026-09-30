# Longest Common Prefix

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/longest-common-prefix/

## Approach

I first considered the first string as the prefix. Then I compared it with each of the other strings character by character. Whenever the characters did not match, I shortened the prefix. The final prefix is the longest common prefix.

## Complexity

- Time: O(n × m)
- Space: O(m)

## Notes

I learned how to compare multiple strings and find the common starting characters among them.
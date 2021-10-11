### 3. Longest Substring Without Repeating Characters

這題可以用兩個指針的典型解法，當前位指針i對應的值存在於map中，我們將後位指針j更新為map[s[i]]+1，
但這裡不要忘記了j只能愈大不能變小，用一個res紀錄遍歷數組時i-j+1的最大值即是答案。

[Leetcode](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

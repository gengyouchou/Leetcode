### 459. Repeated Substring Pattern

題目要求返回字串是否為本身的子字符串重複多次組合而成，如果是的話說明此字串截止至i的最長共同前後輟dp[i]必定要大於等於字串長度i/2，
並且此公共前後輟dp[i]不可有字符重疊的部分，因此可以導出一個簡單的表達式i%(i-dp[i-1])==0，例如以字符串"abab"來說4%(4-2)==0，但以"ababa"來說為
5%(5-3)==1，最終答案就是判斷n%(n-dp[n-1])==0。

[Leetcode](https://leetcode.com/problems/repeated-substring-pattern/)

### 459. Repeated Substring Pattern

題目要求返回字串是否為本身的子字符串重複多次組合而成，如果是的話說明此字串截止至i的最長共同前後輟dp[i]必定要大於等於字串長度n/2，
並且公共前後輟不可有字符重疊的部分，因此可以導出一個簡單的表達式n%(n-dp[n-1])==0。

[Leetcode](https://leetcode.com/problems/repeated-substring-pattern/)

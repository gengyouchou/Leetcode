### 1143. Longest Common Subsequence

典型的動態規劃，我們定義dp[i][j]為以text1[i]與text2[j]為結尾所能構成的最長公共子序列，那麼假如text1[i]等於text2[j]，那麼顯然先前最長公共子序列dp[i-1][j-1]再加一也依然是當前最長公共子序列，
那麼當text1[i]不等於text2[j]的情況下，顯然不可能是dp[i-1][j-1]，只會有兩種情形，分別為dp[i-1][j]和dp[i][j-1]，選大的那個。


[Leetcode](https://leetcode.com/problems/longest-common-subsequence/)


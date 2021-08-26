### 22. Generate Parentheses

這提其實與894. All Possible Full Binary Trees，是非常相像的，我們可以將左右括號分別當成左右子樹，
以dp[i]定義為有i個括號組，我們所能構成的組合list，由j=0到i-1之間找分割點
，以i作為括號中心我們分別對節點為j與i-j-1的子問題做笛卡兒積，這裡-1的意思是以i=1的情況做為基礎括號，
過程中會遞歸調用基礎括號左側組數為j的子問題，右側組數為=i-j-1的子問題，寫起來會像這樣 string t='('+left+')'+right，這部份可能需要動點腦筋，
以i=1的情況就是j=0、i-j-1=0因此dp[1]='('+left+')'+right='()'，如此在遞歸定義之下可建構以i=1到n為括號組數的組合,
以dp形式來說最終返回的答案即是dp[n]。

[Leetcode](https://leetcode.com/problems/generate-parentheses/)

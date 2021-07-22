### 188. Best Time to Buy and Sell Stock IV

股票系列的題目，要求最多只能進行K次交易，我們可以先想想K=1的情況，只需要遍歷股價數組，過程中記錄股票的最低值，並且與當前的股價相減，不斷的更新最大值即是答案。
那麼基於K=1，再次遍歷數組，過程中紀錄上一次股票交易所能獲得的最大收益，我們定義dp[i][j]為在第j天進行第i次交易所能獲得的最大收益，那麼對於第j天只有兩種情況，
1.我賣出股票max(dp[i-1][0...j-1]-prices[0...j-1])+prices[j]或2.我繼續持有股票dp[i][j-1]，兩者中挑大值即是解。

[Leetcode](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/)

### 714. Best Time to Buy and Sell Stock with Transaction Fee

股票系列的題目，我們假設每次交易不收手續費的情況，hold[i]代表在第i天我手中持有股票的狀態下能獲得的最大收益，那麼有兩種可能，1.我買進股票(sold[i-1]+prices[i])或2.我啥都不做(hold[i-1])判斷兩者誰大即可，sold[i]代表在第[i]天在我手中賣出股票的狀態下能獲得的最大收益，那麼同樣有兩種可能，1.我啥都不做(sold[i-1])或2.我賣出股票(hold[i-1]+prices[i])判斷兩者誰大即可，對於有交易手續費的情況，我們只需減去fee在1.我買進股票(sold[i-1]+prices[i]-fee)或2.我賣出股票(hold[i-1]+prices[i]-fee)，最終結果就是我在第n天賣出股票的最大收益(sold[n])。

[Leetcode](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/)


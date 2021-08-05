### 1937. Maximum Number of Points with Cost

典型的動態規劃，我們定義dp[i][j]為從頭截至points[i][j]為止能獲得的最大分數。三重循環，外面兩層遍歷矩陣中元素points[i][j]，第三層循環我們定義k=0....j，遍歷dp[i-1][k]，轉移方程為
dp[i][j]=max(dp[i][j],points[i][j]+dp[i-1][k]-abs(j-k)，提交後得到TLE，於是針對第三層循環搞事情，假設沒有abs(j-k)，我們很容易就可以在i-1的那層迴圈紀錄最大值，但礙於現在多了個abs(j-k)，縱使知道了上一層
誰最大，但我們卻不能知道減去abs(j-k)是否依然是最大呢?，這裡突然想到頭尾兩次遍歷的方法，方程式拆兩部分討論為，dp[i][j]=max(dp[i][j],dp[i-1][k]+k)+points[i][j]-j與dp[i][j]=max(dp[i][j],dp[i-1][k]-k)+points[i][j]+j，或者是說，two pass，算front_max從前往後一律+j，因為-j回來才會是負數，算從後往前一律-j，因為+j回來才會是負數。


[Leetcode](https://leetcode.com/problems/maximum-number-of-points-with-cost/)


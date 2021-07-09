### 646. Maximum Length of Pair Chain
這題本質上為300. Longest Increasing Subsequence的延伸，差別在於必須先按每個pairs的第一個元素做升序排序，再來只要定義dp[i]代表以當前pairs[i]為結尾，並且對於每個j<i而言pairs[i]第一元素也大於pairs[j]二元素，說明了兩個pairs沒有交集，此時回過頭看第一步的排序便可知道這即是找LCS的過程。



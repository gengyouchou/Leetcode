### 894. All Possible Full Binary Trees

完整的二叉樹必須為奇數構成，因此外部循環我們每次加2以確保root之下都維持著偶數節點
，以i作為root我們分別對節點為i與n-i-1的子問題做笛卡兒積，這裡的意思是以root為編號i，
i的範圍可以為0'~'i，過程中會遞歸調用左子樹n=i的子問題，右子樹為n=n-i-1的子問題，如此在遞歸定義之下可建構以n=0~i為root的完整二叉樹,
以dp形式來說最終返回的答案即是dp[n]。


[Leetcode](https://leetcode.com/problems/all-possible-full-binary-trees/)

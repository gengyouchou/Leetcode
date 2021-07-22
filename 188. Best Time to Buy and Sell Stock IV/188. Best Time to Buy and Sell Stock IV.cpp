class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        
        int n=prices.size();
        vector<vector<int>> dp(k+1,vector<int>(n+1,0));
        
        for(int i=1;i<=k;++i){
            int hold=INT_MIN;
            for(int j=1;j<=n;++j){
                dp[i][j]=max(dp[i][j-1],prices[j-1]+hold);
                hold=max(hold,dp[i-1][j]-prices[j-1]);
            }
        }
        
        return dp[k][n];
        
    }
};

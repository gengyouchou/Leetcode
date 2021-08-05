class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        
        int n=points.size(),m=points[0].size();
        
        vector<vector<long long>> dp(n,vector<long long>(m,0));
        
        for(int j=0;j<m;++j){
            dp[0][j]=points[0][j];
        }
        
        for(int i=1;i<n;++i){
            // for(int k=0;k<m;++k){
            //   dp[i][j]=max(dp[i][j],points[i][j]+dp[i-1][k]-abs(j-k));
            // }
            long long front_max=INT_MIN;
            for(int j=0;j<m;++j){
                front_max=max(front_max,dp[i-1][j]+j);
                dp[i][j]=max(dp[i][j],front_max+points[i][j]-j);
            }
            
            long long back_max=INT_MIN;
            for(int j=m-1;j>=0;--j){
                back_max=max(back_max,dp[i-1][j]-j);
                dp[i][j]=max(dp[i][j],back_max+points[i][j]+j);
            }
        }
        
        return *max_element(dp[n-1].begin(),dp[n-1].end());
    }
};

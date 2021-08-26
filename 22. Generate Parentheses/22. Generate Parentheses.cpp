class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        vector<vector<string>> dp(n+1,vector<string>());
        
        dp[0]=vector<string>{""};
        
        for(int i=1;i<=n;++i){
            for(int j=0;j<i;++j){
                for(string left:dp[j]){
                    for(string right:dp[i-j-1]){
                        string t='('+left+')'+right;
                        dp[i].push_back(t);
                    }
                }
            }
        }
        
        return dp[n];
        
    }
};

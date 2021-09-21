class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        int n=s.size();

        auto dp=Build(s);
        
        return dp[n-1]!=0 && n%(n-dp[n-1])==0;
    }

private:
    vector<int> Build(const string& s){
        int n = s.size();
        vector<int>dp(n,0);
        for (int i=1; i<n; ++i)
        {
            int j = dp[i-1];                       
            while(j>0 && s[j]!=s[i])
            {
                j = dp[j-1];
            }          
            dp[i] = j + (s[j]==s[i]);
        }
        return dp;
    }
};

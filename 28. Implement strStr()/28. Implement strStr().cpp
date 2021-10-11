class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n=haystack.size(),m=needle.size();
        
        if(m==0) return 0;
        
        
        
        auto dp=Build(needle);
        
        
        for(int i=0,j=0;i<n;++i){
            while(j>0 && haystack[i]!=needle[j]){
                j=dp[j-1];
            }
            j+=haystack[i]==needle[j];
            if(j==m) return i-j+1;
        }
        
        return -1;
        
    }
    
private:
    vector<int> Build(const string& s){
        int n = s.size();
        vector<int>dp(n,0);
        for (int i=1; i<n; i++)
        {
            int j = dp[i-1];                       
            while (j>0 && s[j]!=s[i])
            {
                j = dp[j-1];
            }          
            dp[i] = j + (s[j]==s[i]);
        }
        return dp;
    }
};

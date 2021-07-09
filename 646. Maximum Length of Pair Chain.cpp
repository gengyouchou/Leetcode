class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        
        sort(pairs.begin(),pairs.end(),[](const vector<int> &a,const vector<int> &b)
             {return a[0]<b[0];});
        
        int n=pairs.size();
        
        vector<int> dp(n,1);
        
        for(int i=1;i<n;++i){
            for(int j=0;j<i;++j){
                if(pairs[j][1]<pairs[i][0]){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        
        return *max_element(dp.begin(),dp.end());
        
    }
};

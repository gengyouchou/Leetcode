class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        
        int n= days.size();
        
        vector<int> dp(366,0); //minimum cost for travel days[0...i]
        
        unordered_set<int> s(days.begin(),days.end());
        
        dp[0]=0;
        
        for(int i=1;i<=days[n-1];++i){
           if(s.find(i)==s.end()){//do nothing
               dp[i]=dp[i-1];
               continue;
           } 
            
            dp[i]=min(dp[max(0,i-1)]+costs[0]
                     ,min(dp[max(0,i-7)]+costs[1],
                          dp[max(0,i-30)]+costs[2]));
        }
        
        return dp[days[n-1]];
        
        
    }
};


// [1,4,6,7,8,20]

// 1...4

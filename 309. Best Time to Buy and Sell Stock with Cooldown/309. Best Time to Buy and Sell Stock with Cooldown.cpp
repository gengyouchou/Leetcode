class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        
        vector<int> hold(n+1,INT_MIN);
        vector<int> sold(n+1,0);
        vector<int> rest(n+1,0);
        
        for(int i=1;i<=n;++i){
            hold[i]=max(hold[i-1],rest[i-1]-prices[i-1]);
            sold[i]=hold[i-1]+prices[i-1];
            rest[i]=max(sold[i-1],rest[i-1]);
        }
        
        return max(rest[n],sold[n]);
        
    }
};

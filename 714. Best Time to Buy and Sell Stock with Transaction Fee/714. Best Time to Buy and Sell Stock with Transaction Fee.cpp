class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        
        int n=prices.size();
        
        vector<int> hold(n+1,INT_MIN);
        vector<int> sold(n+1,0);
        
        for(int i=1;i<=n;++i){
            
            hold[i]=max(hold[i-1],sold[i-1]-prices[i-1]-fee);
            sold[i]=max(sold[i-1],hold[i-1]+prices[i-1]);
        }
        
        return sold[n];
    }
};

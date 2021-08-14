class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        
        unordered_map<int,int> m;
        
        int n=nums.size();
        
        m[0]=1;
        
        for(int i=0;i<n;++i){
            unordered_map<int,int> temp;
            
            for(auto mm:m){
                temp[mm.first+nums[i]]+=mm.second;
                temp[mm.first-nums[i]]+=mm.second;
            }
            
            m=temp;
        }
        
        return m[target];
    }
};

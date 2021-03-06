class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(begin(nums),end(nums));
        const int n=nums.size();
        unordered_map<int,int> c;
        
        for(int x:nums) ++c[x];
        
        vector<vector<int>> ans;
        
        for(int i=0;i<n;++i){
            if(i && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n;++j){
                if(j-1!=i && nums[j]==nums[j-1]) continue;
                const int t=0-nums[i]-nums[j];
                if(t<nums[j]) continue;
                if(!c.count(t)) continue;
                if(c[t]>=1+(nums[i]==t)+(nums[j]==t)){
                    ans.push_back({nums[i],nums[j],t});
                }
            }
        }
        
        return ans;
        
    }
};

// [-4,-1,-1,0,1,2]

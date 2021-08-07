class Solution {
public:
    
    unordered_map<int,int> freq;
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n=nums.size();
        
        for(auto x:nums){
            ++freq[x];
        }
        
        int left=0,right=n;
        
        while(left<right){
            int mid=right-(right-left)/2;
            
            if(count_freq_greater(mid)>=k){
                left=mid;
            }else{
                right=mid-1;
            }
        }
        
        vector<int> ret;
        
        for(auto x:freq){
            if(x.second>=left){
                ret.push_back(x.first);
            }
        }
        
        return ret;
    }
    
    int count_freq_greater(int mid){
        int ret=0;
        for(auto x:freq){
            if(x.second>=mid){
                ++ret;
            }
        }
        return ret;
    }
};

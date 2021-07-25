class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        int left=INT_MIN/2, right=INT_MAX/2;
        
        while(left<right){
            int mid=right-(right-left)/2;
            if(count_greater_then(nums,mid)>=k){
                left=mid;
            }else{
                right=mid-1;
            }
            
        }
        return left;
    }
    
    int count_greater_then(vector<int>&nums,int mid){
        int ret=0;
        for(auto x:nums){
            ret+=x>=mid;
        }
        return ret;
    }
};

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        int n=nums.size();
        
        queue<vector<int>> q;
        
        q.push({nums[0]});
        
        for(int i=1;i<n;++i){
            int len=q.size();
            
            while(len--){
                vector<int> temp=q.front();
                q.pop();
                
                int m=temp.size();
                
                for(int j=0;j<=m;++j){
                    if(j>0 && nums[i]==temp[j-1]) break;
                    vector<int> temp2=temp;
                    temp2.insert(temp2.begin()+j,nums[i]);
                    q.push(temp2);
                }
            }
        }
        
        vector<vector<int>> res;
        
        while(!q.empty()){
            res.push_back(q.front());
            q.pop();
        }
        
        return res;
        
    }
};

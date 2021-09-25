class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        int n=nums.size();
        queue<vector<int>> q;
        q.push({nums[0]});
        
        for(int i=1;i<n;++i){
            int len=q.size();
            
            while(len--){
                vector<int> arr=q.front();
                q.pop();
                
                int m=arr.size();
                
                for(int j=0;j<=m;++j){
                    vector<int> temp=arr;
                    temp.insert(temp.begin()+j,nums[i]);
                    q.push(temp);
                }
            }
        }
        
        vector<vector<int>> rets;
        
        while(!q.empty()){
            rets.push_back(q.front());
            q.pop();
        }
        
        return rets;
        
    }
};

    

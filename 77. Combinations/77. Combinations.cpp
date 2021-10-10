class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        dfs(n,k,1,temp);
        return res;
    }
private:
    vector<vector<int>> res;
    
    void dfs(int n,int k,int i,vector<int>& temp){
        if(temp.size()==k){
            res.push_back(temp);
            return;
        }
        
        for(;i<=n;++i){
            temp.push_back(i);
            dfs(n,k,i+1,temp);
            temp.pop_back();
        }
    }
};

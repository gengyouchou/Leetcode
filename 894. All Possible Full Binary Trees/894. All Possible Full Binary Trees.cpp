/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> allPossibleFBT(int n) {
        
        if(n%2==0) return {};
        
        if(n==1) return {new TreeNode(0)};
        
        vector<TreeNode*> ans;
        
        for(int i=1;i<n;i+=2){
            for(const auto& l:allPossibleFBT(i)){
                for(const auto& r:allPossibleFBT(n-i-1)){
                    auto root=new TreeNode(0);
                    root->left=l;
                    root->right=r;
                    ans.push_back(root);
                }
            }
        }
        
        return ans;
        
    }
};

//dp verson

class Solution {
public:
    vector<TreeNode*> allPossibleFBT(int n) {
        
        if(n%2==0) return {};
        
        vector<vector<TreeNode*>> dp(n+1);
        
        dp[1]={new TreeNode(0)};
        
        for(int i=3;i<=n;i+=2){
            for(int j=1;j<i;j+=2){
                int k=i-j-1;
                for(const auto& l:dp[j]){
                    for(const auto& r:dp[k]){
                        auto root =new TreeNode(0);
                        root->left=l;
                        root->right=r;
                        dp[i].push_back(root);
                    }
                }
            }
        }
        
        return dp[n];
        
    }
};

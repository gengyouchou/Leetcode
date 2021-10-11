class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n=s.size();
        
        unordered_map<int,int> m;
        
        int counts=0;
        int res=0;
        
        for(int i=0,j=0;i<n;++i){
            
            if(m.count(s[i])){
                j=max(j,m[s[i]]+1);
            }
            
            res=max(res,i-j+1);
            m[s[i]]=i;
            
        }
        
        
        return res;
        
        
    }
};

// abba
// 0123 
//    i
//   j

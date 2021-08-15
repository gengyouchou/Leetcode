class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
       
        unordered_map<int,int> m;
        
        for(auto d:deck){
            ++m[d];
        }
        
        int res=0;
        
        for(auto mm:m){
            res=gcd(mm.second,res);
        }
        
        return res>1;
    }
};

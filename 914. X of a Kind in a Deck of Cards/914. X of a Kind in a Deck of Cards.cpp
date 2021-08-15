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
    
private:
    int gcd(int a,int b){
        if(b==0) return a;
        if(a<b) return gcd(b,a);
        return gcd(b,a%b);
    }
    
};

class Solution {
public:
    int countPrimes(int n) {
        
        vector<int> isnotPrimes(n,0);
        int count=0;
        
        for(int i=2;i<n;++i){
            if(isnotPrimes[i]==0){
                ++count;
                for(int j=i;long(i)*long(j)<n;++j){
                    isnotPrimes[i*j]=1;
                }
            }
        }
        
        return count;
        
    }
};

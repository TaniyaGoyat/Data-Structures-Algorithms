class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size()*grid.size();
        long long s1=0;
        long long s2=0;
        long long s1N= (long long)n*(n+1)/2;
        long long s2N=  (long long)n*(n+1)*(2*n+1)/6;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                s1+=grid[i][j];
            }
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                s2+=(long long)grid[i][j]*(long long)grid[i][j];
            }
        }
     
        int val1=s1-s1N;
        int val2=s2-s2N;
     long long x=(val1+(val2/val1))/2;
     
     long long y= x-val1;
     return {(int)x,(int)y};

    }
};

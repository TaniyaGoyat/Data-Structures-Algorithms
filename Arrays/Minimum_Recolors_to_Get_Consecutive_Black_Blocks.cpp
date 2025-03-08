class Solution {
public:
    int minimumRecolors(string blocks, int k) {
       int n=blocks.size();
       int minOp=INT_MAX;
       for(int i=0;i<=n-k;i++){
        int cnt=0;
        string str=blocks.substr(i, k);
        for(int j=0;j<str.length();j++){
          if(str[j]=='W')cnt++;
        }
        minOp=min(minOp,cnt);
       } 
       return minOp;
    }
};

LEETCODE-2379

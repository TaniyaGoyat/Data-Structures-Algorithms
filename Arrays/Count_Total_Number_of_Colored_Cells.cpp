class Solution {
public:
    long long coloredCells(int n) {
        int jump=4;
        long long  ans=1;
        while(n>1){
            ans+=jump;
            jump+=4;
            n--;
        }
        return ans;
    }
};

class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int> ans={-1,-1};
      for(int i=0;i<nums.size();i++){
        for(int j=i;j<nums.size();j++){
            if(nums[i]+nums[j]==target && i!=j){
                ans[0]=i;
                ans[1]=j;
                break;
            }
        }
      }
      return ans;
    }
};

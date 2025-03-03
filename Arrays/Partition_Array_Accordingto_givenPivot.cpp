class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>smaller;
        vector<int>greater;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                smaller.push_back(nums[i]);
            }
            else if(nums[i]==pivot)cnt++;
            else{
                greater.push_back(nums[i]);
            }
        }
       vector<int>ans;
       for(int i=0;i<smaller.size();i++){
        ans.push_back(smaller[i]);
       }
       for(int i=0;i<cnt;i++){
        ans.push_back(pivot);
       }
       for(int i=0;i<greater.size();i++){
        ans.push_back(greater[i]);
       }
     return ans;
    }
}

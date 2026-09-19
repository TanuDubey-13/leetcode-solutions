class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        int n=nums.size();
        int sum ;
        for(int i=0;i<n-2;i++){
            if(i > 0 && nums[i] == nums[i - 1])
                continue;
            int left = i+1;
            int right = n-1;
            sum=-nums[i];
            while(left<right){
            int s = nums[left]+nums[right];
            if(s==sum){
            res.push_back({nums[i],nums[left],nums[right]});
            left++;
            right--;
            while(left<n && nums[left]==nums[left-1]){
                left++;
              }
            while(right>=0 && nums[right]==nums[right+1]){
                right--;
              }
            }
            else if(s<sum){
                left++;
            }
            else{
                right--;
            }
          }
        }
        return res;
    }
};
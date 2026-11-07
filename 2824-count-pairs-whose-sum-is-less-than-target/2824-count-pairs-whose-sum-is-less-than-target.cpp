class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        sort(nums.begin(),nums.end());
        int count=0;
        while(low<high){
            int sum = nums[low]+nums[high];
            if(sum < target) {
                count += high - low;
                low++;
            }
            else {
                high--;
            }
        }
        return count;
    }
};
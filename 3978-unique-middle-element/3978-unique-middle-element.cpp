class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int mid=nums.size()/2;
        int count=0;
        for(int i=0;i<nums.size();i++){
        if(nums[i]==nums[mid]) count++;
        }
        if(count>1) return false;

        return true;

    }
};
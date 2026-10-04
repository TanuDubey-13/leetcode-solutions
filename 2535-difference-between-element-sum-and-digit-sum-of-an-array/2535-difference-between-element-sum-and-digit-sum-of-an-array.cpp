class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int digitSum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int val=nums[i];
            while(val!=0){
                int dig=val%10;
                digitSum+=dig;
                val/=10;
            }
        }
        return abs(sum-digitSum);
    }
};
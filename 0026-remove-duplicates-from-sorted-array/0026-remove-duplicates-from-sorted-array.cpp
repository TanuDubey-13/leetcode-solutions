class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pos=0;
        int move=1;
        int count=1;
        while(move<nums.size()){
            if(nums[move]==nums[move-1]){
                move++;
                continue;
            }
            nums[pos+1]=nums[move];
            pos++;
            move++;
            count++;
        }
        return count;
    }
};
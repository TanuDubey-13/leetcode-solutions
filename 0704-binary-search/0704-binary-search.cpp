class Solution {
public:
    int search(vector<int>& nums, int target) {
      int low=0;
      int high=nums.size()-1;
      while(low<=high){
        int guess=(low+high)/2;
        if(nums[guess]==target) return guess;
        if(nums[guess]<target)  low=guess+1;
        else high=guess-1;
      }  
      return -1;
    }
};
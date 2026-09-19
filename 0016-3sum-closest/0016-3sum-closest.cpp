class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       sort(nums.begin(),nums.end());
       int n=nums.size();
       int sum;
       int res_sum;
       int max_diff=INT_MAX;
       for(int i =0;i<n-2;i++){
        int l=i+1;
        int r=n-1;
        while(l<r){
        sum=nums[i]+nums[l]+nums[r];
        if(sum==target){
            return target;
        }
        int diff= abs(sum-target);
        if(diff<max_diff){
            max_diff=diff;
            res_sum=sum;
        }
        if(sum<target){
            l++;
        }
        else{
            r--;
          }
        }
       }
    return res_sum;
    }
};
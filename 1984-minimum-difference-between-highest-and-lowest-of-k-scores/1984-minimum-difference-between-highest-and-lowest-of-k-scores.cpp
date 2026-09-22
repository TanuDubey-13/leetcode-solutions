class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<k) return 0;
        sort(nums.begin(),nums.end());
        int low=0;
        int high=k-1;
        int res=INT_MAX;
        while(high<n){
            res=min(res,nums[high]-nums[low]);
            low++;
            high++;
        }
        return res;
    }
};
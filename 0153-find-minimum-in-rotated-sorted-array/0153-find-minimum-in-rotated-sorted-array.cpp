class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int n=nums.size();
        int high=n-1;
        int res=-1;
        while(low<=high){
            int mid=(high+low)/2;
            if(nums[mid]>nums[n-1]) low=mid+1;
            else{
                res=mid;
                high=mid-1;
            }
        }
        return nums[res];
    }
};
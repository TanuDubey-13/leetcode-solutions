class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int res = INT_MAX;
        for(int i=l;i<=r;i++){
            int sum=0;
            for(int j=0;j<i;j++){
                sum+=nums[j];
            }
            if(sum>0) res=min(res,sum);
            int low=0;
            int high =i;
            while(high<n){
                sum-=nums[low];
                sum+=nums[high];
                low++;
                high++;
                if(sum>0) res=min(res,sum);
            }
        }
        if(res==INT_MAX) return -1;
        return res;
    }
};
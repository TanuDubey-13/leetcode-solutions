class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();
        long long total =0;
        long long first =0;
        for(int x: nums){
            total+=x;
        }
        for(int i=0;i<n/2;i++){
                first+=nums[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            long long second = total-first;
            if(first>second){
                ans++;
            }
            first-=nums[i];
            first+=nums[(i+n/2)%n];
        }
        return ans;
    }
};
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> f;
        int sum=0;
        f[0]=1;
        int res=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int t=sum-k;
            int freq=f[t];
            res+=freq;
            f[sum]++;
        }
        return res;
    }
};
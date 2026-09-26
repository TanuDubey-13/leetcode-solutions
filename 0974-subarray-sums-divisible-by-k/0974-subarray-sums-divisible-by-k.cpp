class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> f;
        int sum=0;
        int ans=0;
        f[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum%k;
            if(rem<0) rem=rem+k;
            ans+=f[rem];
            f[rem]++;
        }
        return ans;
    }
};
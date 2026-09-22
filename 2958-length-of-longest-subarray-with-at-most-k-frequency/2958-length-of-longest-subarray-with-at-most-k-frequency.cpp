class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        int low = 0;
        int res = 0;
        for (int high = 0; high < nums.size(); high++) {
            mpp[nums[high]]++;
            while (mpp[nums[high]] > k) {
                mpp[nums[low]]--;
                low++;
            }
            res = max(res, high - low + 1);
        }
        return res;
    }
};
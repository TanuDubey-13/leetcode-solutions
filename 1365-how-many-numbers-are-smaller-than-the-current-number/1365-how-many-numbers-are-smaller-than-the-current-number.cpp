class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        for(int x : nums) {
            mpp[x]++;
        }
        for(int x : nums) {
            int count = 0;
            for(auto it : mpp) {
                if(it.first < x) {
                    count += it.second;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};
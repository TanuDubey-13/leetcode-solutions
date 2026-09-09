class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> mpp;

        // Count frequency
        for(int x : nums) {
            mpp[x]++;
        }

        vector<pair<int, int>> v;

        // Store number and frequency
        for(auto it : mpp) {
            v.push_back({it.first, it.second});
        }

        // Sort by frequency in descending order
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        vector<int> ans;

        // Take top k
        for(int i = 0; i < k; i++) {
            ans.push_back(v[i].first);
        }

        return ans;
    }
};
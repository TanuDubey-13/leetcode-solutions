class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int, int> mpp;
        for(int x : nums) {
            mpp[x]++;
        }

        sort(nums.begin(), nums.end(), [&](int a, int b) {
            
            if(mpp[a] != mpp[b])
                return mpp[a] < mpp[b];   // lower frequency first
            
            return a > b;                 // larger number first
        });

        return nums;
    }
};
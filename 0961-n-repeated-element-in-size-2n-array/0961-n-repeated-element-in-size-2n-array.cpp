class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int x : nums){
            mpp[x]++;
        }
        int len=nums.size();
        int n=len/2;
        for(auto it:mpp){
            if(it.second==n) return it.first;
        }
        return -1;
    }
};
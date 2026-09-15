class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int x: nums){
            mpp[x]++;
        }
        for(auto it : mpp){
            if(it.second==1) return it.first;
        }
        return -1;
    }
};
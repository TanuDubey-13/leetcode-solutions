class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int x : nums){
            mpp[x]++;
        }
        vector<int> v;
        for(auto it : mpp){
            if(it.second==1) 
            v.push_back(it.first);
        }
        return v;
    }
};
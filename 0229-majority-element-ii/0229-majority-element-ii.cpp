class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int x: nums){
            mpp[x]++;
        }
        int n=nums.size();
        int m=n/3;
        vector<int> v;
        for(auto it : mpp){
            if(it.second>m){
                v.push_back(it.first);
            }
        }
        return v;
    }
};
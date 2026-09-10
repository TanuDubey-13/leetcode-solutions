class Solution {
public:
    unordered_map<int,int> mpp;
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto  it: mpp){
            if(it.second>1) return true;
        }
        return false;
    }
};
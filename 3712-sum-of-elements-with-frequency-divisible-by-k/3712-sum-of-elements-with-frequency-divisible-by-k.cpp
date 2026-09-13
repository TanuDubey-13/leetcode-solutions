class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        int n=nums.size();
        for(int x : nums){
            mpp[x]++;
        }
        int sum=0;
        for(auto it : mpp){
            if(it.second%k==0){
               sum+=it.first*it.second;
            }
        }
        return sum;
    }
};
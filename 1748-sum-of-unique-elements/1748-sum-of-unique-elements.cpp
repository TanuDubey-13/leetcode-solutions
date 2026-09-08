class Solution {
public:
    unordered_map<int,int> mpp;
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            if(it.second==1){
                sum+=it.first;
            }
            
        }
        return sum;
    }
};
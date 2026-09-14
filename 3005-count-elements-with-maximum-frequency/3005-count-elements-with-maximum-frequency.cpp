class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int n = nums.size();
        for(int x : nums){
            mpp[x]++;
        }
        int sum=0;
        int maxfreq=0;
        for(auto it : mpp){
            if(it.second>maxfreq){
                maxfreq=it.second;
                
            }
            
        }
        for(auto it: mpp){
            if(it.second==maxfreq){
                sum+=maxfreq;
            }
        }
        return sum;
    }
};
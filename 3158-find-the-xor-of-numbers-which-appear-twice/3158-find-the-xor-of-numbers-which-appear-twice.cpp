class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int x : nums){
            mpp[x]++;
        }
        int result=0;
      for(auto it : mpp){
         if(it.second==2)
         result^=it.first;
      }
      return result;
    }
};
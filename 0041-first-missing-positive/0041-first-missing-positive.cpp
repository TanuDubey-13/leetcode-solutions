class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int x : nums){
            freq[x]++;
        }
        int i =1;
        while(true){
            if(freq.find(i)==freq.end())  return i;

            i++;
        }
    }
};
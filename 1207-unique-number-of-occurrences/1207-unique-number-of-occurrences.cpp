class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mpp;
        unordered_map<int, int> freq;
        for(int x : arr){
            mpp[x]++;
        }
        for(auto it : mpp){
            freq[it.second]++;
            if(freq[it.second]>1) return false;
        }
        return true;
        
    }
};
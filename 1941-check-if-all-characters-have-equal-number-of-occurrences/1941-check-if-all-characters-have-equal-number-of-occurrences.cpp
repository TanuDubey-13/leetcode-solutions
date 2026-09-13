class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<int, int> mpp;
        int n =s.size();
        for(int x : s){
            mpp[x]++;
        }
        int last_occ = mpp[s[n-1]];
        for(auto it : mpp){
            if(it.second!=last_occ) return false;
            
        }
        return true;
    }
};
class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> mpp;
        for(int x : s){
            mpp[x]++;
        }
        int maxOdd=0;
        int minEven=INT_MAX;
        for(auto it : mpp){
         if(it.second%2!=0 && it.second>maxOdd){
            maxOdd=it.second;
         }
         else if(it.second%2==0 && it.second<minEven){
            minEven=it.second;
         }
        }
        int diff = maxOdd-minEven;
        return diff;
    }
};
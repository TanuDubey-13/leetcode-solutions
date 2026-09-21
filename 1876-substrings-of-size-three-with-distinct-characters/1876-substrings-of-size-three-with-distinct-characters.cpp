class Solution {
public:
    int countGoodSubstrings(string s) {
        int low = 0;
        int high=2;
        int count=0; 
        while(high<s.size()){
            if (s[low] != s[low + 1] &&
                s[low] != s[high] &&
                s[low + 1] != s[high]) {
                count++;
            }
            low++;
            high++;
        }
        return count;
   }
};
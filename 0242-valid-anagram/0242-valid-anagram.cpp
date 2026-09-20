class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        if(s.size()!=t.size()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int x:s){
            mp1[x]++;
        }
        for(int x:t){
            mp2[x]++;
        }
        for(auto it : mp1) {
           if(mp2[it.first] != it.second) {
               return false;
            }
        }
        return true;
    }
};
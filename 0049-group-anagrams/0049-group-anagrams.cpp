class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        for(string s : strs) {
            string temp = s;
            sort(temp.begin(), temp.end());
            mpp[temp].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto it : mpp) {
            ans.push_back(it.second);
        }
        return ans;
    }
};
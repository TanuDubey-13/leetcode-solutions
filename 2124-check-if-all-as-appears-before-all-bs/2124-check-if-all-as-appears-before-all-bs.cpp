class Solution {
public:
    bool checkString(string s) {
        bool ans=true;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b' && s[i+1]=='a') ans=false;
        }
        return ans;
    }
};
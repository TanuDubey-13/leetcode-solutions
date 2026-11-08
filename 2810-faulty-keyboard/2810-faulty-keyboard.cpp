class Solution {
public:
    string finalString(string s) {
        string ans;
        int i=0;
        while(i<s.size()){
            if(s[i]!='i'){
                ans+=s[i];
                i++;
            }
            else{
                reverse(ans.begin(),ans.end());
                i++;
            }
        }
        return ans;
    }
};
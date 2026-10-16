class Solution {
public:
    void fun(string&s, int n, int idx, string tmp, vector<string>&res){
        unordered_map<char,string> f;
        f['2']="abc";
        f['3']="def";
        f['4']="ghi";
        f['5']="jkl";
        f['6']="mno";
        f['7']="pqrs";
        f['8']="tuv";
        f['9']="wxyz";
        if(idx==n){
            res.push_back(tmp);
            return;
        }
        string choice=f[s[idx]];
        for(int j=0;j<choice.size();j++){
            tmp.push_back(choice[j]);
            fun(s,n,idx+1,tmp,res);
            tmp.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
        
        int n = digits.size();
        int idx=0;
        string tmp="";
        vector<string> res;
        fun(digits,n,idx,tmp,res);
        return res;
    }
};
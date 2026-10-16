class Solution {
public:
vector<string> res;
    void fun(string &tmp, int open, int close,int n){
        if(open==n && close==n){
            res.push_back(tmp);
            return;
        }
        //open
        if(open<n){
            tmp.push_back('(');
            fun(tmp,open+1,close,n);
            tmp.pop_back();
        }
        //close
        if(close<open){
            tmp.push_back(')');
            fun(tmp,open,close+1,n);
            tmp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string curr;
        fun(curr,0,0,n);
        return res;
    }
};
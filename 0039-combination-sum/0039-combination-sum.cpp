class Solution {
public:
    void fun(vector<int> &a, int n, int idx, vector<int>&tmp, int sum, vector<vector<int>>&res, int target){
        if(idx==n){
            if(sum==target)
            res.push_back(tmp);
            return;
        }
        fun(a,n,idx+1,tmp,sum,res,target);
        if(a[idx]+sum<=target){
            tmp.push_back(a[idx]);
            sum+=a[idx];
            fun(a,n,idx,tmp,sum,res,target);
            tmp.pop_back();
            sum-=a[idx];
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        int sum=0;
        vector<int>tmp;
        vector<vector<int>> res;
        int idx=0;
        fun(candidates, n, idx, tmp, sum, res, target);
        return res;
    }
};
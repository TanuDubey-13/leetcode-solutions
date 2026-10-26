class Solution {
public:
    unordered_map<int,int> dp;
    int climbStairs(int n) {
        if(n==0 || n==1) return 1;
        if(dp.find(n)!=dp.end()) return dp[n];
        int a1=climbStairs(n-1);
        int a2=climbStairs(n-2);
        int ans = a1+a2;
        dp[n]=ans;
        return ans;
    }
};
class Solution {
public:
int fun(vector<int>& a, int n, int i, int k,
            vector<vector<int>>& dp) {
        if(i == n || k == 0) return 0;
        if(dp[i][k] != -1) return dp[i][k];
        int c1, c2;
        if(k%2 == 0) {
            // Buy
            c1 = fun(a, n, i+1, k-1, dp) - a[i];
            c2 = fun(a, n, i+1, k, dp);
        }
        else {
            // Sell
            c1 = fun(a, n, i+1, k-1, dp) + a[i];
            c2 = fun(a, n, i+1, k, dp);
        }
        return dp[i][k] = max(c1, c2);
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(5, -1));
        return fun(prices, n, 0, 4, dp);
    }
};
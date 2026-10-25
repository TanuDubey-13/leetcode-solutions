class Solution {
public:
    bool valid(int i, int j, int n, int m){
        if(i<0 || i>=n || j<0 || j>=m) return false;
        return true;
    }
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n=heights.size();
        int m = heights[0].size();
        vector<vector<int>> res(n);
        int i;
        for(i=0;i<n;i++){
            vector<int> t(m,INT_MAX);
            res[i]=t;
        }
        priority_queue<
            pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>> > pq;

        int x[4]={1,-1,0,0};
        int y[4] = {0,0,1,-1};
        res[0][0] = 0;
        pq.push({0,{0,0}});
        while(!pq.empty()){
            pair<int, pair<int, int>> p=pq.top();
            pq.pop();
            int dis = p.first;
            int row = p.second.first;
            int col = p.second.second;
            if(dis > res[row][col]) continue;
            for(int k=0;k<4;k++){
                int r =row+x[k];
                int c = col+y[k];
                if(!valid(r,c,n,m)) continue;
                int abs_diff = abs(heights[row][col]-heights[r][c]);
                int new_wt = max(abs_diff, dis);
                if(new_wt < res[r][c]){
                    res[r][c]= new_wt;
                    pq.push({new_wt,{r,c}});
                }
            }
        }
        return res[n-1][m-1];
    }
};
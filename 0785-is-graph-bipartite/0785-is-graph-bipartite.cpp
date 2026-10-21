class Solution {
public:
    bool res= true;
    void dfs(vector<vector<int>>& a, int node, int c, vector<int>& colors){
        colors[node]=c;
        for(int j=0;j<a[node].size();j++){
            int neigh = a[node][j];
            if(colors[neigh]!=-1 && colors[neigh]==c)
            res=false;
            if(colors[neigh]==-1)
            dfs(a, neigh, 1-c, colors);
        }
        return;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> colors(n,-1);
        for(int i=0; i<n;i++){
            if(colors[i]==-1)
            dfs(graph, i, 0, colors);
        }
        return res;
    }
};
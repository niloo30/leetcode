class Solution {
public:
    bool dfs(int s,int d,vector<vector<int>>& g,vector<int>& vis){
        if(s==d)
        return true;
        vis[s]=1;

        for(int ele:g[s]){
            if(!vis[ele]){
                if(dfs(ele,d,g,vis))
                return true;
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        int m=edges.size();

        vector<vector<int>> graph(n);

        for(int i=0;i<m;i++) {
            int u=edges[i][0];
            int v=edges[i][1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vector<int> vis(n);
        return dfs(source,destination,graph,vis);

        
    }
};
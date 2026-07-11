class Solution {
public:
    void dfs(int s,vector<vector<int>>& adj,vector<int>& vis,int& v,int& e) {
        vis[s]=1;
        v++;
        e+=adj[s].size();

        for(int ele:adj[s]) {
            if(!vis[ele]) {
                dfs(ele,adj,vis,v,e);
            }
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {

        vector<vector<int>> adj(n);

        for(int i=0;i<edges.size();i++) {
            int u=edges[i][0];
            int v=edges[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int ans=0;
        vector<int> vis(n,0);

        for(int i=0;i<n;i++) {
            if(!vis[i]) {
                int v=0;int e=0;
                dfs(i,adj,vis,v,e) ;

                if(e==(v*(v-1)))
                ans++;
            }
        }

        return ans;
        
    }
};
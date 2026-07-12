class Solution {
public:
    #define ll long long 
    void dfs(int s,int comp,vector<vector<int>>& adj,vector<int>& vis) {
        vis[s]=comp;

        for(int ele:adj[s]) {
            if(vis[ele]==-1) {
                dfs(ele,comp,adj,vis);
            }
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {

        vector<vector<int>> adj(n);
        int m=edges.size();

        for(int i=0;i<m;i++) {
            int u=edges[i][0];
            int v=edges[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> vis(n,-1);
        //storing componant number in vis array 

        for(int i=0;i<n;i++) {
            if(vis[i]==-1) {
                dfs(i,i,adj,vis);
            }
        }
        map<int,int> mp;

        for(int i=0;i<n;i++) {
            mp[vis[i]]++;
        }

        ll ans=0;

        for(auto & ele:mp) {
            n-=ele.second;

            ans+=(1LL*n*ele.second);
        }

        return ans;
    }
};
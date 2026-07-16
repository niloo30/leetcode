class Solution {
public:
    #define ll long long 
    int mod=1e9+7;
    ll power(ll base,ll expo) {
        if(expo==0)
        return 1;

        ll temp=power(base,expo/2);

        ll ans=(temp*temp)%mod;

        if(expo&1)
        ans=(ans*base)% mod;


        return ans;
    }
    int dep(int node,int par,vector<vector<int>>& adj) {

        int maxdepth=0;

        for(auto ele:adj[node]) {
            if(ele==par) continue;

            maxdepth=max(maxdepth,1+dep(ele,node,adj));
        }

        return maxdepth;
    }
    int assignEdgeWeights(vector<vector<int>>& edges) {


        int m=edges.size();

        int n=m+2;

        vector<vector<int>> adj(n);

        for(int i=0;i<m;i++) {

            int u=edges[i][0];
            int v=edges[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }


        int d=dep(1,-1,adj);

        return power(2,d-1);

        
    }
};
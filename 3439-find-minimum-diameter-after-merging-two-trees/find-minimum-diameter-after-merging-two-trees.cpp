class Solution {
public:
    pair<int,int> dfs(int node,int parent,int dist,vector<vector<int>>& adj){
        pair<int,int> res={dist,node};


        for(int nxt:adj[node]){
            if(nxt==parent) continue;

            res=max(res,dfs(nxt,node,dist+1,adj));
        }
        return res;
    }
    int minimumDiameterAfterMerge(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {

        int n = edges1.size()+1;
        vector<vector<int>> adj1(n);

        for (auto &e : edges1) {
            adj1[e[0]].push_back(e[1]);
            adj1[e[1]].push_back(e[0]);
        }

        int m= edges2.size()+1;
        vector<vector<int>> adj2(m);

        for (auto &e:edges2) {
            adj2[e[0]].push_back(e[1]);
            adj2[e[1]].push_back(e[0]);
        }




        auto t1=dfs(0,-1,0,adj1);
        auto t2=dfs(t1.second,-1,0,adj1);

        int d1=t2.first;


        auto p1=dfs(0,-1,0,adj2);
        auto p2=dfs(p1.second,-1,0,adj2);

        int d2=p2.first;

        int ans=max({d1,d2,1+((d1+1)/2)+((d2+1)/2)});

        return ans;


        
    }
};
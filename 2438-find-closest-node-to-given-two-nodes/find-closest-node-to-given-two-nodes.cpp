class Solution {
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {

        int n=edges.size();

        vector<vector<int>> adj(n);
        for(int i=0;i<n;i++) {
            if(edges[i]==-1) continue;
            adj[i].push_back(edges[i]);
        }



        vector<int> dist1(n,1e9),dist2(n,1e9);
        vector<int> vis(n,0);

        queue<pair<int,int>> q;

        q.push({node1,0});

        dist1[node1]=0;
        vis[node1]=1;

        while(!q.empty()) {
            int node=q.front().first;
            int d=q.front().second;

            q.pop();
            
            dist1[node]=d;

            for(auto ele:adj[node]) {
                    if(!vis[ele]) {
                        vis[ele]=1;
                        q.push({ele,d+1});
                    }
                }
        }
        for(int& ele:vis)
        ele=0;
        q.push({node2,0});

        dist2[node2]=0;
        vis[node2]=1;

        while(!q.empty()) {
            int node=q.front().first;
            int d=q.front().second;

            q.pop();
            
            dist2[node]=d;

            for(auto ele:adj[node]) {
                    if(!vis[ele]) {
                        vis[ele]=1;
                        q.push({ele,d+1});
                    }
                }
        }

        int ans=1e9;
        int node=-1;

        for(int i=0;i<n;i++) {
            int curr=max(dist1[i],dist2[i]);

            if(curr<ans) {
                ans=curr;
                node=i;
            }
        }

        return node;


        

        
    }
};
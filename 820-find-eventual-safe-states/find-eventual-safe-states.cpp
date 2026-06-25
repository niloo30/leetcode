class Solution {
public:
    bool dfs(int src,vector<int>& vis,vector<int>& pathvis,vector<vector<int>>& graph)
    {
        vis[src]=1;
        pathvis[src]=1;
        
        
        for(auto ele:graph[src])
        {
            if(!vis[ele])
            {
                if(dfs(ele,vis,pathvis,graph))
                return true;
            }
            else if(pathvis[ele]==1)
            return true;
        }
        
        pathvis[src]=0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {

        int V=graph.size();
        vector<int> vis(V,0);
        vector<int> pathvis(V,0);
        
        
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                (dfs(i,vis,pathvis,graph));
                
            }
        }
        vector<int> ans;
        
        for(int i=0;i<V;i++)
        {
            if(pathvis[i]==0)
            ans.push_back(i);
        }
        return ans;
        
    }
};
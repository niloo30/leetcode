class Solution {
public:
    void dfs(int s,int end,vector<vector<int>>& graph,vector<int>& vis,vector<int>& v,vector<vector<int>>& ans) {

        if(s==end){
            ans.push_back(v);
            return ;
        }

        vis[s]=1;

        for(int ele:graph[s]) {
            if(!vis[ele]) {
                v.push_back(ele);
                dfs(ele,end,graph,vis,v,ans);
                v.pop_back();
                vis[ele]=0;
            }
        }

    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {

        int n=graph.size();

        vector<int> vis(n,0);
        vector<int> v;
        vector<vector<int>> ans;
        v.push_back(0);
        dfs(0,n-1,graph,vis,v,ans);
        return ans;
        
    }
};
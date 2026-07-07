class Solution {
public:
    void dfs(int s,int end,vector<vector<int>>& graph,vector<int>& v,vector<vector<int>>& ans) {

        if(s==end){
            ans.push_back(v);
            return ;
        }

        

        for(int ele:graph[s]) {
           
                v.push_back(ele);
                dfs(ele,end,graph,v,ans);
                v.pop_back();
                
            
        }

    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {

        int n=graph.size();

       
        vector<int> v;
        vector<vector<int>> ans;
        v.push_back(0);
        dfs(0,n-1,graph,v,ans);
        return ans;
        
    }
};
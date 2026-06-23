class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {

        int n=graph.size();
        vector<int> color(n,-1);
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
                queue<int> q;
                q.push(i);
                color[i]=0;

                while(!q.empty())
                {
                    int node=q.front();
                    q.pop();

                    for(auto ele:graph[node])
                    {
                        if(color[ele]==-1)
                        {
                            color[ele]=1-color[node];
                            q.push(ele);
                        }
                        else if(color[node]==color[ele])
                        {
                            return false;
                        }
                    }
                }
                

            }
        }
        
        return true;
        
    }
};
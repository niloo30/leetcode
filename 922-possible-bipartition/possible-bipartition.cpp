class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {

        int m=dislikes.size();

        vector<vector<int>> graph(n+1);

        for(int i=0;i<m;i++) {
            int u=dislikes[i][0];
            int v=dislikes[i][1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        //is graph bipartite 
        vector<int> color(n+1,-1);

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
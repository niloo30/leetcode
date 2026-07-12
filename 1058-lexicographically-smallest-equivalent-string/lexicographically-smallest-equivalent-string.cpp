
class Solution {
public:
    char dfs(char ch,unordered_map<int,vector<int>>& adj,vector<int>& vis) {
        vis[ch-'a']=1;
        char mini=ch;


        for(auto ele:adj[ch]) {
            if(!vis[ele-'a']) {
                mini=min(mini,dfs(ele,adj,vis));
            }
        }
        return mini;
    }
    string smallestEquivalentString(string s1, string s2, string baseStr) {

        unordered_map<int,vector<int>> adj;

        int n=s1.size();

        for(int i=0;i<n;i++) {
            int u=s1[i];
            int v=s2[i];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int m=baseStr.size();

        for(int i=0;i<m;i++) {
            char ch=baseStr[i];
            vector<int> vis(26,0);

            ch=dfs(ch,adj,vis);
            baseStr[i]=ch;

        }
        return baseStr;
    }
};
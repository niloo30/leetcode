class TreeAncestor {
public:
    int r,c;
    vector<vector<int>> dp;
    TreeAncestor(int n, vector<int>& parent) {

        r=n;
        c=log2(n)+1;


        dp.resize(r,vector<int>(c,-1));

        for(int i=0;i<n;i++) {
            dp[i][0]=parent[i];
        }

        for(int j=1;j<c;j++) {
            for(int node=0;node<r;node++) {
                
                if(dp[node][j-1]!=-1)
                dp[node][j]= dp[ dp[node][j-1] ] [j-1];
            }
        }
        
    }
    
    int getKthAncestor(int node, int k) {

        for(int i=0;i<c;i++) {
            if(k&(1<<i)) {
                node= dp[node] [i];

                if(node==-1)
                return node;
            }
        }
        return node;
        
    }
};

/**
 * Your TreeAncestor object will be instantiated and called as such:
 * TreeAncestor* obj = new TreeAncestor(n, parent);
 * int param_1 = obj->getKthAncestor(node,k);
 */
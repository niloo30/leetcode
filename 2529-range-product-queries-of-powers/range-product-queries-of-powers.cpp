class Solution {
public:
    int mod=1e9+7;
    vector<int> productQueries(int n, vector<vector<int>>& queries) {

        // binary representation on n ->power of 2's

        vector<int> power;
        for(int i=0;i<31;i++)
        {
            if(n&(1<<i))
            {
                power.push_back(1<<i);
            }
        }
        vector<int> ans;
        for(int i=0;i<queries.size();i++)
        {
            int l=queries[i][0];
            int r=queries[i][1];
            long long val=1;
            for(int k=l;k<=r;k++)
            {
                val=((val % mod)*(power[k] % mod))% mod;
            }
            ans.push_back(val);
        }
        return ans;
        
    }
};
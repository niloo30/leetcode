class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {

        int n=arr.size();
        vector<int> pre(n,0);

        pre[0]=arr[0];
        for(int i=1;i<n;i++)
        pre[i]=pre[i-1]^arr[i];

        vector<int> ans;

        for(int i=0;i<queries.size();i++)
        {
            int l=queries[i][0];
            int r=queries[i][1];

            if(l>0)
            ans.push_back(pre[r]^pre[l-1]);
            else
            ans.push_back(pre[r]);
        }

        return ans;

        
    }
};
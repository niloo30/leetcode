class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {


        int n=nums.size();
        vector<int> pre(n,0);

        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1];

            if((nums[i]%2)==(nums[i-1]%2))
            pre[i]++;
        }
        int m=queries.size();
        vector<bool> ans(m);

        for(int i=0;i<m;i++)
        {
            int l=queries[i][0];
            int r=queries[i][1];

            if(pre[r]-pre[l]==0)
            ans[i]=true;
            else
            ans[i]=false;
        }
        return ans;
    }
};
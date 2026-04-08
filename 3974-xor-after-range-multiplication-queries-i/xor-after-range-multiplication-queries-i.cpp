class Solution {
public:
    int mod=1e9+7;
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& q) {

        int n=nums.size();
        int m=q.size();

        for(int i=0;i<m;i++)
        {
            int l=q[i][0];
            int r=q[i][1];
            int k=q[i][2];
            int v=q[i][3];

            int idx=l;
            while(idx<=r){
                 nums[idx]=((1LL*nums[idx]*v)%mod);
                 idx+=k;
            }
        }

        int x=0;

        for(auto ele:nums)
        x^=ele;

        return x;
        
    }
};
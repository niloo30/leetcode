class Solution {
public:
    int dp[505][505];
    int f(int i,int j,vector<int>& nums1,vector<int>& nums2)
    {
        if(i==nums1.size() || j==nums2.size())
        return 0;

        if(dp[i][j]!=-1)
        return dp[i][j];
        int same=0,notsame=0;

        if(nums1[i]==nums2[j])
        same=1+f(i+1,j+1,nums1,nums2);

        else
        notsame=max(f(i+1,j,nums1,nums2),f(i,j+1,nums1,nums2));

        return dp[i][j]=max(same,notsame);

    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        
        memset(dp,-1,sizeof(dp));
        return f(0,0,nums1,nums2);
    }
};
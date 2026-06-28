class Solution {
public:
    map<int,vector<int >> mp;
    int dp[1001][1001];
    int rec(int i,int x,vector<int>& nums,int k)
    {

        if(dp[i][x]!=-1)
        return dp[i][x];


        int ans=2;
        auto &v = mp[nums[i] % k];

        auto it = lower_bound(v.begin(), v.end(), x);
        
        if(it!=v.begin())
        {
            it--;
            int y=*it;
            ans=max(ans,1+rec(x,y,nums,k));
        }
        return dp[i][x]=ans;
    }
    int maximumLength(vector<int>& nums, int k) {

        memset(dp,-1,sizeof(dp));
        int n=nums.size();

        for(int i=0;i<n;i++)
        mp[nums[i]%k].push_back(i);

        int ans=0;

        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                ans=max(ans,rec(i,j,nums,k));
            }
        }

        

        return ans;
    }
};
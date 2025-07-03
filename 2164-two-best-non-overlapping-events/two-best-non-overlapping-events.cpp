class Solution {
public:
    int dp[100001][3];
    int upper(vector<vector<int>>& arr,int idx)
    {
        int l=idx+1;
        int h=arr.size()-1;
        int itr=arr.size();

        while(l<=h)
        {
            int mid=(l+h)/2;
            if(arr[mid][0]>arr[idx][1])
            {
                itr=mid;
                h=mid-1;
            }
            else
            l=mid+1;
        }
        return itr;
    }
    int f(vector<vector<int>>& arr,int i,int k)
    {
        if(k==2 || i>=arr.size())
        return 0;
        if(dp[i][k]!=-1)
        return dp[i][k];
        int idx=upper(arr,i);
        int take=arr[i][2]+f(arr,idx,k+1);
        int skip=f(arr,i+1,k);

        return dp[i][k]=max(take,skip);
    }
    int maxTwoEvents(vector<vector<int>>& arr) {

        sort(arr.begin(),arr.end());
        
        memset(dp,-1,sizeof(dp));
        return f(arr,0,0);
        
    }
};
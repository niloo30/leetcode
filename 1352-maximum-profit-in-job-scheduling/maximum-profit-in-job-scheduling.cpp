class Solution {
public:
    int dp[100000];
    int lowerb(vector<vector<int>>& arr,int i)
    {
        int l=i;
        int h=arr.size()-1;

        int ans=arr.size();

        while(l<=h)
        {
            int mid=(l+h)/2;

            if(arr[mid][0]>=arr[i][1])
            {
                ans=mid;
                h=mid-1;
            }
            else
            l=mid+1;
        }
        return ans;
    }
    int f(vector<vector<int>>& arr,int i,int n)
    {
        if(i>=n)
        return 0;

        //cache check 
        if(dp[i]!=-1)
        return dp[i];

        int take=0,skip=0;
        skip=f(arr,i+1,n);
        int idx=lowerb(arr,i);
        take=arr[i][2]+f(arr,idx,n);

        return dp[i]= max(take,skip);
    }

    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {


        vector<vector<int>> arr;
        for(int i=0;i<profit.size();i++)
        {
            vector<int> v={startTime[i],endTime[i],profit[i]};
            arr.push_back(v);
        }
        sort(arr.begin(),arr.end());
        int n=arr.size();

        memset(dp,-1,sizeof(dp));
        return f(arr,0,n);
        
    }
};
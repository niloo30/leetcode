class Solution {
public:
    int mod=1e9+7;
    int power(int base,int expo)
    {
        int ans=1;
        for(int i=1;i<=expo;i++)
        {
            ans=(ans*base)%mod;

        }

        return ans%mod;
    }
    int countWays(vector<vector<int>>& arr) {

        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;

        int start=arr[0][0];
        int end=arr[0][1];

        for(int i=1;i<n;i++)
        {
            if(arr[i][0]<=end)
            end=max(end,arr[i][1]);
            else
            {
                vector<int> v={start,end};
                ans.push_back(v);
                start=arr[i][0];
                end=max(end,arr[i][1]);
            }
        }

        vector<int> v={start,end};
        ans.push_back(v);


        return  power(2,ans.size());
        
    }
};
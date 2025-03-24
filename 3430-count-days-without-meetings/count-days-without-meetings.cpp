class Solution {
public:
    int countDays(int d, vector<vector<int>>& arr) {

        int n=arr.size();

        int ans=0;

        sort(arr.begin(),arr.end());

        ans+=(arr[0][0]-1);
        int e=arr[0][1];

        for(int i=1;i<n;i++)
        {
            if(arr[i][0]>e)
            ans+=((arr[i][0])-e-1);

            e=max(arr[i][1],e);
        }

        ans+=(d-e);


        return ans;
        
    }
};
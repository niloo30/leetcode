class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {

        int n=nums.size();
        int x=-1;
        vector<int> arr(n,0);
        for(int i=0;i<queries.size();i++)
        {
            int l=queries[i][0];
            int r=queries[i][1];

            arr[l]+=x;
            if(r+1<n)
            arr[r+1]-=x;
        }
        for(int i=1;i<n;i++)
        arr[i]+=arr[i-1];

        for(int i=0;i<n;i++)
        {
            nums[i]+=arr[i];
            if(nums[i]>0)
            return false;
        }

        return true;
        
    }
};
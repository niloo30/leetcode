class Solution {
public:
    bool check(int mid,vector<int>& arr)
    {
        int idx=lower_bound(arr.begin(),arr.end(),mid)-arr.begin();
        int num=arr.size()-idx;

        return num>=mid;
    }
    int hIndex(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int l=0;
        int h=arr.size();

        int ans;

        while(l<=h)
        {
            int mid=(l+(h-l)/2);

            if(check(mid,arr))
            {
                ans=mid;
                l=mid+1;
            }
            else
            h=mid-1;
        }

        return ans;
        
    }
};
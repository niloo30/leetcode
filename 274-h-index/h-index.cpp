class Solution {
public:
    bool check(int mid,vector<int> arr)
    {
        int idx=lower_bound(arr.begin(),arr.end(),mid)-arr.begin();

        return arr.size()-idx>=mid;
    }
    int hIndex(vector<int>& arr) {

        int l=0;
        int h=arr.size();

        sort(arr.begin(),arr.end());
        int ans=0;

        while(l<=h)
        {
            int mid=(h+l)/2;
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
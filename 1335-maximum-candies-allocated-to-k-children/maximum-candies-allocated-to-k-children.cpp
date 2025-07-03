class Solution {
public:
    #define ll long long
    bool check(ll mid,vector<int>& arr,ll k)
    {
        ll count=0;
        for(auto ele:arr)
        count+=(ele/mid);

        return count>=k;
    }
    int maximumCandies(vector<int>& arr, long long k) {

        int n=arr.size();
        int ans=0;
        ll l=1;
        ll h=*max_element(arr.begin(),arr.end());

        while(l<=h)
        {
            ll mid=(l+h)/2;

            if(check(mid,arr,k))
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
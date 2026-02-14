class Solution {
public:
    using ll =long long;
    bool check(ll mid,vector<int>& nums)
    {
        //can we make value as mid 
        vector<ll> arr(nums.begin(),nums.end());

        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]>mid)
            return false;

            ll extra=mid-arr[i];
            arr[i+1]-=extra;

    
        }

        return arr[arr.size()-1]<=mid;
    }
    int minimizeArrayValue(vector<int>& nums) {

        int l=0;
        int h=*max_element(begin(nums),end(nums));

        int ans=h;

        while(l<=h)
        {
            int mid=(l+h)/2;

            if(check(mid,nums))
            {
                ans=mid;
                h=mid-1;
            }
            else
            l=mid+1;
        }

        return ans;
        
    }
};
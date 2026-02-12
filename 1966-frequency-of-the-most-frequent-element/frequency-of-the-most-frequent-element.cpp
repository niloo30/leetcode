class Solution {
public:
    #define ll long long 
    bool check(ll mid,ll k,vector<int>& nums,vector<ll>& presum)
    {
        ll i=0,j=0;
        int n=nums.size();

        while(j<n)
        {
            if(j-i+1==mid)
            {
                ll sum=presum[j];
                if(i-1>=0)
                sum-=presum[i-1];

                ll reqd_sum=(j-i+1)*nums[j];


                if(reqd_sum-sum<=k)
                return true;
                i++;
            }

            
            j++;

        }
        return false;
    }
    int maxFrequency(vector<int>& nums, int k) {


        int n=nums.size();

        ll l=1;
        ll h=n;
        int ans=l;
        sort(nums.begin(),nums.end());
        vector<ll> presum(n);
        for(int i=0;i<n;i++)
        {
            presum[i]=nums[i];
            if(i)
            presum[i]+=presum[i-1];
        }
        while(l<=h){
            ll mid=(h+l)/2;

            if(check(mid,k,nums,presum))
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
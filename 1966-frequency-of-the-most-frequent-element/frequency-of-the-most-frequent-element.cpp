class Solution {
public:
    #define ll long long
    // check is taking n*mid almost n^2
    //so tc n^2logn 
    // optimise the inner loop using prefix sum 
    bool check(int mid,int k,vector<int>& nums,vector<ll>& presum)
    {
        // window ssize ->k 

        // now just check ki subarray of size mid exist where we can make all eemnts equal to its last element using k operations 
        int n=nums.size();
        int i=0,j=0;

        while(j<n)
        {
            if(j-i+1==mid)
            {
                // int diff=0;
                // for(int k=i;k<=j;k++)
                // {
                //     diff+=(nums[j]-nums[k]);
                // }

                // if(diff<=k)
                // return true;
                ll req_sum=((ll)nums[j]*(ll)mid); // 
                ll sum_wehave=0;
                if(i-1>=0)
                sum_wehave=presum[j]-presum[i-1];
                else
                sum_wehave=presum[j];

                if(k+sum_wehave>=req_sum)
                return true;

                i++;
            }
            j++;
        }
        return false;
    }
    int maxFrequency(vector<int>& nums, int k) {

        int n=nums.size();
        sort(nums.begin(),nums.end());
        int l=1;
        int h=n;

        vector<ll> presum(n);
        presum[0]=nums[0];

        for(int i=1;i<n;i++)
        {
            presum[i]=presum[i-1]+nums[i];
        }

        int ans=1;
        while(l<=h)
        {
            int mid=(l+(h-l)/2);

            if(check(mid,k,nums,presum))
            {
                ans=mid;
                l=mid+1;
            }else
            h=mid-1;
        }
        return ans;
        
    }
};
class Solution {
public:
    bool check(int mid,vector<int>& nums,int k)
    {
        int count=0;
        int prev=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<=mid)
            {
                if(prev==-1)
                {
                    count++;
                    prev=i;
                }
                else if(prev!=(i-1))
                {
                    count++;
                    prev=i;
                }
            }
        }

        return count>=k;
    }
    int minCapability(vector<int>& nums, int k) {

        int n=nums.size();
        int l=1;
        int h=1e9;

        int ans=-1;
        while(l<=h)
        {
            int mid=(l+(h-l)/2);
            if(check(mid,nums,k))
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
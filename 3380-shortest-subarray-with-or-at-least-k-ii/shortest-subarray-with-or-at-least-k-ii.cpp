class Solution {
public:
    bool check(vector<int>& arr,int k)
    {

        int val=0;
        for(int i=0;i<32;i++)
        if(arr[i] > 0) val |= (1 << i);
        
        return val>=k;
    }
    int minimumSubarrayLength(vector<int>& nums, int k) {

        int n=nums.size();

        for(int i=0;i<n;i++)
        if(nums[i]>=k)
        return 1;


        vector<int> bit(32,0);
        int i=0,j=0;
        int ans=INT_MAX;

        while(j<n)
        {
            // add contribution of nums[j]
            for(int p=0;p<32;p++)
            {
                if(nums[j] & (1 << p)) bit[p]++;

            }
            
            while(check(bit,k))
            {
                ans=min(ans,j-i+1);
                //remove contribution of nums[i];

                for(int p = 0; p < 32; p++) {
                    if(nums[i] & (1 << p)) bit[p]--;
                }
                i++;
            }
            j++;
        }

        return ans==INT_MAX ?-1: ans;
        
    }
};
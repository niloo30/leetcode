class Solution {
public:
    #define ll long long 
    long long maximumSubarraySum(vector<int>& nums, int k) {

        ll ans=0;
        map<int,int> mp;
        ll sum=0;

        int i=0,j=0;
        int n=nums.size();

        while(j<n)
        {
            sum+=nums[j];
            mp[nums[j]]++;
            if(j-i+1==k)
            {
                if(mp.size()==k)
                ans=max(ans,sum);

                sum-=nums[i];
                mp[nums[i]]--;
                if(mp[nums[i]]==0)
                mp.erase(nums[i]);
                
                i++;
            }
            j++;
        }


        return ans;
        
    }
};
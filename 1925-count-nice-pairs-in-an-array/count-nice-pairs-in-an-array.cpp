class Solution {
public:
    int mod=1e9+7;
    int rev(int n)
    {
        int val=0;

        while(n>0)
        {
            int rem=n%10;
            n/=10;

            val=10*val+rem;
        }
        return val;
    }
    int countNicePairs(vector<int>& nums) {

        int n=nums.size();

        long long ans=0;
        unordered_map<int,long long> mp;

        for(int ele:nums)
        {
            mp[ele-rev(ele)]++;
        }

        for(auto ele:mp)
        {
            long long freq=ele.second;
            ans=(ans+((freq*(freq-1))/2))%mod;
        }
        
        return ans;
        
    }
};
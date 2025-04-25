class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int m, int k) {

        int n=nums.size();

        long long ans=0;

        vector<int> mod(n);
        for(int i=0;i<n;i++)
        mod[i]=nums[i]%m;

        unordered_map<int,int> mp;
        mp[0]=1;

        int presum=0;
        for(int i=0;i<n;i++)
        {
            if(mod[i]==k)
            presum++;

            int val=(presum % m - k + m) % m;


            if(mp.find(val)!=mp.end())
            {
                ans+=mp[val];
            }
            mp[presum%m]++;
        }
        return ans;
    }
};
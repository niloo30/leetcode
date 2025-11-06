class Solution {
public:
    long long countBadPairs(vector<int>& nums) {

        long long ans=0;

        long long n=nums.size();

        long long total=(n*(n-1)/2);
        long long good=0;

        unordered_map<long long,long long> mp;

        for(int i=0;i<n;i++)
        mp[nums[i]-i]++;

        for(auto ele:mp)
        {
            long long freq=ele.second;
            good+=(freq*(freq-1)/2);
        }

        ans=total-good;

        return ans;
        
    }
};
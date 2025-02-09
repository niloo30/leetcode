class Solution {
public:
    long long countBadPairs(vector<int>& nums) {

        unordered_map<long long,long long> mp;
        long long n=nums.size();

        long long good=0;
        long long bad=0;
        for(int i=0;i<n;i++)
        {
            int x=nums[i]-i;
            if(mp.find(x)!=mp.end())
            {
                good=good+mp[x];
            }
            mp[x]++;
        }
        long long total=(n*(n-1))/2;
        bad=total-good;

        return bad;

        
    }
};
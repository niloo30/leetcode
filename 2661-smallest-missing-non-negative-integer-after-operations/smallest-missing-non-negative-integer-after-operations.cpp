class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int> mp;

        for(auto ele:nums)
        {
            if(ele>=0)
            mp[ele%k]++;
            else
            mp[((ele%k)+k)%k]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp.find(i%k)==mp.end())
            return i;

            mp[i%k]--;
            if(mp[i%k]==0)
            mp.erase(i%k);
        }
        return n;
        
    }
};
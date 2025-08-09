class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {

        unordered_map<int,int> start,last,freq;
        int maxfreq=0;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
            maxfreq=max(maxfreq,freq[nums[i]]);
            if(start.find(nums[i])==start.end())
            {
                start.insert({nums[i],i});
            }
        }

        for(int i=nums.size()-1;i>=0;i--)
        {
            if(last.find(nums[i])==last.end())
            {
                last.insert({nums[i],i});
            }
        }

        int ans=nums.size();

        for(auto ele:freq)
        {
            if(ele.second==maxfreq)
            {
                int l=start[ele.first];
                int r=last[ele.first];

                ans=min(ans,r-l+1);
            }
        }

        return ans;
        
    }
};
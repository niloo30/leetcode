class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {

        if(nums.size()==1)
        return 1;
        if(k==0)
        {
            int ans=1,count=1;
            for(int i=1;i<nums.size();i++)
            {
                if(nums[i]==nums[i-1])
                {
                    count++;
                }
                else
                {
                    ans=max(ans,count);
                    count=1;
                }
            }
            ans=max(ans,count);
            return ans;
        }

        
        int n=nums.size();
        int i=0,j=0;
        int ans=0;
        unordered_map<int,int> mp;
        int maxfreq=0;
    
        while(j<n)
        {
            mp[nums[j]]++;

            maxfreq=max(maxfreq,mp[nums[j]]);

            while((j-i+1-maxfreq)>k)
            {
                mp[nums[i]]--;
                // maxfreq=0;

                // for(auto ele:mp)
                // {
                //     maxfreq=max(maxfreq,ele.second);
                // }
                i++;
            }
            ans=max(ans,maxfreq);
            j++;

        }

        return ans;
        
    }
};
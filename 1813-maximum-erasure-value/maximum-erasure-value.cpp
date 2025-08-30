class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {

        // the problem is max sum of subarray with unique elements

        int ans=0;
        int n=nums.size();
        int i=0,j=0;
        int tempsum=0;
        unordered_map<int,int> mp;
        while(j<n){
            mp[nums[j]]++;
            tempsum+=nums[j];

            while(j-i+1>mp.size())
            {
                mp[nums[i]]--;
                if(mp[nums[i]]==0)
                mp.erase(nums[i]);

                tempsum-=nums[i];
                i++;
            }
            ans=max(ans,tempsum);
            j++;
        }
        return ans;
        
    }
};
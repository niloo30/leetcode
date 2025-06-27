class Solution {
public:
    int totalFruit(vector<int>& nums) {

        int n=nums.size();
        int ans=0;

        int i=0,j=0;
        map<int,int> mp;

        while(j<n)
        {
            mp[nums[j]]++;

            while(mp.size()>2)
            {
                mp[nums[i]]--;
                if(mp[nums[i]]==0)
                mp.erase(nums[i]);
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }

        return ans;
        
    }
};
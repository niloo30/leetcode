class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {

        map<int,int> mp;
        int maxi=0;
        int i=0,j=0;
        int n=nums.size();

        while(j<n)
        {   
            mp[nums[j]]++;
            maxi=max(maxi,mp[nums[j]]);

            if(j-i+1-maxi>k)
            {
                mp[nums[i]]--;
                i++;
            }
            j++;
        }
        return maxi;
        
    }
};
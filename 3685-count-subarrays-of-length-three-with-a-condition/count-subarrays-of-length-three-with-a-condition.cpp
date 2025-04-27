class Solution {
public:
    int countSubarrays(vector<int>& nums) {

        int n=nums.size();

        int k=3;
        int ans=0;

        int i=0,j=0;

        while(j<n)
        {
            if(j-i+1==k)
            {
                if(2*(nums[i]+nums[j])==nums[i+1])
                ans++;

                i++;
            }
            j++;
        }

        return ans;
        
    }
};
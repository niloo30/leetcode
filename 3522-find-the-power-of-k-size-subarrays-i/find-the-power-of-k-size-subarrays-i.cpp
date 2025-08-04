class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        
        int n=nums.size();
        if(n==1 || k==1)
        return nums;
        vector<int> ans;

        int i=0,j=1;
        int count=1;
        while(j<n)
        {
            if(nums[j]==nums[j-1]+1)
            count++;
            else
            count=1;

            if(j-i+1==k)
            {
                if(count>=k)
                ans.push_back(nums[j]);
                else
                ans.push_back(-1);
                i++;
            }
            j++;
        }
        return ans;
    }
};
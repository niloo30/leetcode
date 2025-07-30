class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        // bitwise and reduce 
        // tr ky kar find maximum element 
        // and then max subarray len with max element 

        int maxi=*max_element(nums.begin(),nums.end());

        int ans=0;
        int count=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==maxi)
            {
                count++;
                ans=max(ans,count);  
                
            }
            else
            count=0;
            
            
        }
        return ans;
        
    }
};
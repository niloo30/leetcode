class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int n=nums.size();  
        if(k<=1)return 0;
        int ans=0;
        int i=0,j=0;
        int prd=1;
        while(j<n)
        {
            prd*=nums[j];
            while(prd>=k)
            {
                prd/=nums[i];
                i++;
            }
            ans=ans+(j-i)+1;
            j++;
        }
        return ans;



        
    }
};
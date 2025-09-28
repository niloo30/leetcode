class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size();

        sort(nums.begin(),nums.end());
        
        int ans=0;
        for(int i=n-1;i>=2;i--)
        {
            int x=nums[i];
            int y=nums[i-1];
            int z=nums[i-2];
            if(y+z>x)
            {
                return x+y+z;

            }
            
        }
        return ans;
        
    }
};
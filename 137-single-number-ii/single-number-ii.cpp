class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n=nums.size();

        int ans=0;
        vector<int> bit(32,0);

        for(int i=0;i<n;i++)
        {
            int val=nums[i];
            for(int j=0;j<32;j++)
            {
                if(val & (1<<j))
                bit[j]++;
            }
            
        }
        for(int i=0;i<32;i++)
        {
            if(bit[i]%3)
            {
                ans|=(1<<i);
            }
        }

        return ans;
    }
};
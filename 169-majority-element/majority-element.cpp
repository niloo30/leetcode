class Solution {
public:
    int majorityElement(vector<int>& nums) {

        //try with bit manipulation

        vector<int> bit(32,0);

        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int val=nums[i];

            for(int j=0;j<32;j++)
            {
                if(val&(1<<j))
                bit[j]++;
            }
        }

        int ans=0;

        for(int i=0;i<32;i++)
        {
            if(bit[i]>n/2)
            {
                ans|=(1<<i);
            }
        }


        return ans;
        
    }
};
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int n=nums.size();

        int ans=0;
        
        int zero=0;

        for(int i=0;i<=31;i++)
        {
            int ones=0;
            for(int j=0;j<n;j++)
            {
                int x=nums[j];
                if((x & (1<<i)))
                ones++;
            }
            if(ones%3)
            ans=(ans|(1<<i));


        }


        return ans;
        
    }
};
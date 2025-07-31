class Solution {
public:
    bool isnice(vector<int>& nums,int i,int j)
    {
        if(j-i+1==1)
        return true;
        for(int p=0;p<31;p++)
        {
            int count=0;
            for(int k=i;k<=j;k++)
            {
                if((nums[k]&(1<<p)))
                count++;
            }

            if(count>1)
            return false;
        }
        return true;
    }
    int longestNiceSubarray(vector<int>& nums) {

        int n=nums.size();

        int ans=0;
        int i=0,j=0;

        while(j<n)
        {
            while(!isnice(nums,i,j))
            {
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
        
    }
};
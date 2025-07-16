class Solution {
public:
    int maximumLength(vector<int>& nums) {
        
        int n=nums.size();
        int ans=0;
        // find max of even even even .....
        // odd odd odd odd ......
        // e o e o e o 
        //o e o e o e
        int count1=0,count2=0;
        for(int i=0;i<n;i++)
        {
            if((nums[i]&1)==0)
            count1++;
            if((nums[i]&1))
            count2++;
        }
        ans=max(ans,max(count1,count2));

        count1=1;
        if(nums[0]&1) // first ele is odd find alternating seq length
        {
            int prev=1;
            for(int i=1;i<n;i++)
            {
                if(nums[i]%2==0 && prev==1)
                {
                    count1++;
                    prev=0;
                }
                else if(nums[i]%2==1 && prev==0)
                {
                    count1++;
                    prev=1;

                }
            }
            ans=max(ans,count1);
        }
        else
        {
            int prev=0;
            for(int i=1;i<n;i++)
            {
                if(nums[i]%2==1 && prev==0)
                {
                    count1++;
                    prev=1;
                }
                else if(nums[i]%2==0 && prev==1)
                {
                    count1++;
                    prev=0;

                }
            }
            ans=max(ans,count1);

        }

        return ans;
        
    }
};
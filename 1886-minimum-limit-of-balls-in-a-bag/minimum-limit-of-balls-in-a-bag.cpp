class Solution {
public:
    bool check(int mid,vector<int>& nums,int maxOperations)
    {
        // for(auto ele:nums)
        // {
        //     if(ele>mid)
        //     {
        //         if((ele&1))
        //         ele++;

        //         while(ele>mid)
        //         {
        //             ele/=2;
        //             maxOperations--;
        //             if((ele&1))
        //             ele++;


        //             if(maxOperations<0)
        //             return false;
        //         }
        //     }
        //     if(maxOperations<0)
        //     return false;
        // }

        long long count =0;
        for(int ele:nums)
        {
            if(ele>mid)
            {
                // ele+=mid-1;
                count+=(ele-1)/mid;
            }
        }
        return maxOperations>=count;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {

        int l=1;
        int h=*max_element(begin(nums),end(nums));

        int ans=-1;

        while(l<=h)
        {
            int mid=(l+(h-l)/2);

            if(check(mid,nums,maxOperations))
            {
                ans=mid;
                h=mid-1;
            }
            else
            l=mid+1;
        }
        return ans;
        
    }
};
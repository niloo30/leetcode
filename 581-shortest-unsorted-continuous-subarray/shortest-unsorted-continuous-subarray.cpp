class Solution {
public:
    bool check(int x,vector<int>& arr,int i)
    {
        int n=arr.size();
        if(i==0)
        return x>arr[1];

        if(i==n-1)
        return x<arr[i-1];

        return x>arr[i+1] || x<arr[i-1];
    }
    int findUnsortedSubarray(vector<int>& nums) {

        int n=nums.size();
        if(n==1)
        return 0;
        int small=1e9;
        int large=-1e9;
        for(int i=0;i<n;i++)
        {
            int x=nums[i];
            if(check(x,nums,i))
            {
                small=min(small,x);
                large=max(large,x);
            }
        }
        if(small==1e9)
        return 0;

        int l=0,r=n-1;
        while(l<n && small>=nums[l])
        l++;

        while(r>=0 && large<=nums[r])
        r--;

        return r-l+1;
        
    }
};
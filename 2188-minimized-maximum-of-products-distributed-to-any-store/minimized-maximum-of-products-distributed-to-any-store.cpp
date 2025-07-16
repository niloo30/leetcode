class Solution {
public:
    bool check(int mid,vector<int>& arr,int n)
    {
        int count=0;

        for(int ele:arr)
        {
            ele+=mid-1; // we need to take floor value
            count+=(ele/mid);

            if(count>n)
            return false;
        }
        return count<=n;
    }
    int minimizedMaximum(int n, vector<int>& arr) {

        int l=1;
        int h=*max_element(arr.begin(),arr.end());
        int ans=0;

        while(l<=h)
        {
            int mid=(l+(h-l)/2);
            if(check(mid,arr, n))
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
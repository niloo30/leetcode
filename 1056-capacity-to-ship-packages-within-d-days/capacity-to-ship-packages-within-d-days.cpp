class Solution {
public:
    bool check(int mid,vector<int>& arr,int days)
    {
        int count = 1; 
        int tempsum = 0;

        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>mid)
            return false;
            
            if(arr[i]+tempsum<=mid)
            {
                tempsum+=arr[i];
            }
            else
            {
                count++;
                tempsum=arr[i];
            }
        }

        return count <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {

        int n=weights.size();

        int sum=accumulate(weights.begin(),weights.end(),0);

        int ans=sum;

        int low=1;
        int high=sum;

        while(low<=high)
        {
            int mid=(low+(high-low)/2);

            if(check(mid,weights,days))
            {
                ans=mid;
                high=mid-1;
            }
            else
            low=mid+1;

        } 
        return ans;
        
    }
};
class Solution {
public:
    int m=1e9+7;
    int numOfSubarrays(vector<int>& arr) {

        int n=arr.size();

        int ans=0;
        //even +odd=odd
        //odd+even==odd
        int even=1;
        int odd=0;
        int presum=0;
        for(int i=0;i<n;i++)
        {
            presum+=arr[i];

            if(presum%2==0)
            {
                ans=(ans+odd)%m;
                even++;
            }
            else
            {
                ans=(ans+even)%m;
                odd++;
            }
        }

        return ans;

        
    }
};
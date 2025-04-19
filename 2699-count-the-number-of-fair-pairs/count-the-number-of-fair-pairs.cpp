class Solution {
public:
    long long fun(vector<int>& arr,int val)
    {
        long long ans=0;

        int i=0,j=arr.size()-1;

        while(i<j)
        {
            while(i<j and arr[i]+arr[j]>val)
            {
                j--;
            }
            ans+=(j-i);
            i++;
        }
        return ans;
    }
    long long countFairPairs(vector<int>& nums, int lower, int upper) {

        // do this first find pairs <=r -->f
        // them find pairs <=l-1  --> s

        // ans===f-s
        sort(nums.begin(),nums.end());
        long long f=fun(nums,upper);
        long long s=fun(nums,lower-1);


        return f-s;


    }
};
class Solution {
public:
    int sz(int n)
    {
        int len=0;
        while(n)
        {
            len++;
            n/=10;
        }

        return len;
    }
    long long findTheArrayConcVal(vector<int>& nums) {

        long long ans=0;
        int n=nums.size();

        int i=0,j=n-1;

        while(i<j)
        {
            int val1=nums[i];
            int val2=nums[j];

            int len=sz(val2);
            
            for(int i=0;i<len;i++)
            val1*=10;

            int temp=val1+val2;

            ans+=temp;
            i++;
            j--;
        }
        if(n%2)
        ans+=nums[i];

        return ans;

        return ans;
        
    }
};
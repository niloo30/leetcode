class Solution {
public:
    int m=1e9+7;
    int concatenatedBinary(int n) {

        long long ans=0;

        for(int i=1;i<=n;i++)
        {
            int dig=log2(i)+1;
            ans=((ans<<dig)%m+i)%m;
        }

        return ans;
        
    }
};
class Solution {
public:
    int trailingZeroes(int n) {


        int ans=0;

        while(n>0)
        {
            int x=n;
            while(x%5==0)
            {
                ans++;
                x/=5;
            }
            n--;
        }

        return ans;
        
    }
};
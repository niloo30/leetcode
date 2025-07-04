class Solution {
public:
    int commonFactors(int a, int b) {

        int g=gcd(a,b);
        int ans=0;
        for(int i=1;i*i<=g;i++)
        {
            if(g%i==0)
            {
                ans++;
                if(i!=(g/i))
                ans++;

            }
            
        }
        return ans;
        
    }
};
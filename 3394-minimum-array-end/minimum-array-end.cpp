class Solution {
public:
    int  f(int n)
    {
        int i;
        for( i=0;i<32;i++)
        {
            if((n&(1<<i))==0)
            {
                break;
            }
        }
        if(i<32)
        n|=(1<<i);
        return n;

    }
    long long minEnd(int n, int x) {

        long long ans=x;

        long long val=n-1;
        for(long long i=0;i<64;i++)
        {
            if((x&(1LL<<i))==0)
            {
                //extract the lsb of val and modify its value
                long long lastbit=(val&1);
                val=val>>1;
                lastbit=(lastbit<<i);
                ans=(ans| lastbit);
            }
        }

        return ans;
        
    }
};
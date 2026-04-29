class Solution {
public:
    long long  lcm(int a,int b)
    {
        //return ((1LL*a*b)/(__gcd(a,b)));

        return (a / __gcd(a,b)) * 1LL * b;
    }
    bool check(long long  mid,int n,int a,int b,int c)
    {
        long long  count=0;
        // for(int i=1;i<=mid;i++)
        // {
        //     if(i%a==0 || i%b==0 || i%c==0)
        //     count++;

        //     if(count>=n)
        //     return true;
        // }
        long long ab = lcm(a, b);
        count+=(mid/a);
        count+=(mid/b);
        count+=(mid/c);
        count-=(mid/lcm(a,b));
        count-=(mid/lcm(b,c));
        count-=(mid/lcm(c,a));
        count+=(mid/lcm(ab,c));
        return count>=n;
    }
    int nthUglyNumber(int n, int a, int b, int c) {


        long long l=1;
        long long  h=2e9;

        long long  ans=h;
        while(l<=h)
        {
            long long  mid=(l+(h-l)/2);

            if(check(mid,n,a,b,c))
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
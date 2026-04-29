class Solution {
public:
    int mod=1e9+7;
    int mul(int a,int b){
        return (1LL*(a%mod)*(b%mod))%mod;
    }
    int numPrimeArrangements(int n) {

        if(n<=2)
        return 1;
        vector<bool> arr(n+1,true);

        arr[0]=arr[1]=false;

        for(int i=2;i*i<=n;i++)
        {
            if(arr[i])
            {
                for(int j=i*i;j<=n;j+=i)
                arr[j]=false;
            }
        }
        int primes=0;
        for(int i=0;i<=n;i++)
        {
            if(arr[i])
            primes++;
        }
        // ans fact(primes)*fact(n-primes)

        int perm=1;
        for(int i=1;i<=primes;i++)
        {
            perm=mul(perm,i);
        }
        for(int i=1;i<=n-primes;i++)
        {
            perm=mul(perm,i);
        }

        return perm;
        
    }
};
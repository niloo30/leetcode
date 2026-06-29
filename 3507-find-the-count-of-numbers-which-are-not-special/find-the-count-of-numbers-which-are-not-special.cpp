bool computed=false;
vector<bool> primes(100001,true);

void precompute(){

    if(!computed){

        // compute kr bhai 

        
        primes[0]=primes[1]=false;

        int n=primes.size();

        for(int i=2;i*i<=n;i++)
        {
            if(primes[i]){
                for(int j=i*i;j<=n;j+=i)
                {
                    primes[j]=false;
                }
            }
            
        }

        computed=true;
    }
}

class Solution {
public:
    
    int nonSpecialCount(int l, int r) {

        precompute();

        int primecount=0;
        int total=r-l+1;

        for(int i=2;i*i<=r;i++)
        {
            if(primes[i] && i*i>=l)
            primecount++;
        }


        return total-primecount;
        
    }
};
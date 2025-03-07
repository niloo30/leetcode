class Solution {
public:
    vector<int> closestPrimes(int left, int right) {

        vector<bool> arr(right+1,true);//sieve of eratosthenes
        arr[0]=false;
        arr[1]=false;
        for(int i=2;i*i<=right;i++)
        {
            if(arr[i]==false)
            continue;
            for(int j=i+i;j<=right;j=j+i)
            {
                arr[j]=false;
            }
        }

        vector<int> primes; //iterating on primes 
        for(int i=left;i<=right;i++)
        if(arr[i])
        primes.push_back(i);

        int mini=INT_MAX;
        vector<int> ans={-1,-1};
        for(int i=1;i<primes.size();i++)
        {
            if(primes[i]-primes[i-1]<mini)
            {
                mini=primes[i]-primes[i-1];
                ans={primes[i-1],primes[i]};

                if(mini<=2)
                break;
            }
        }
        return ans;

        
    }
};
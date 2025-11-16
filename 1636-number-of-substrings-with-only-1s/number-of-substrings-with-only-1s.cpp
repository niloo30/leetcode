class Solution {
public:
    int mod=1e9+7;
    int numSub(string s) {


        int n=s.size();
        long long ans=0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')continue;
            long long j=i;
            while(j<n &&s[j]=='1')j++;
            long long x=j-i;
            long long temp=(x*(x+1))/2;
            ans=(ans+temp)%mod;
            i=j;
        }
        return ans;
        
    }
};
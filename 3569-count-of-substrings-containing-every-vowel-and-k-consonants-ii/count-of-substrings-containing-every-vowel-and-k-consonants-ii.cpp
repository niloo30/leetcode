class Solution {
public:
    #define ll long long
    bool isvowel(char ch)
    {
        if(ch=='a' || ch=='e' || ch=='o' || ch=='i' || ch=='u')
        return true;
        return false;
    }
    ll f(string & s,int k)
    {
        unordered_map<char,int> mp;
        int count=0;

        int i=0,j=0;
        int n=s.size();
        ll ans=0;
        while(j<n)
        {
            char ch=s[j];
            if(isvowel(ch))
            mp[ch]++;
            else
            count++;

            while(count>=k && mp.size()==5)
            {
                ans+=(n-j);
                if(mp.find(s[i])!=mp.end())
                {
                    mp[s[i]]--;
                    if(mp[s[i]]==0)
                    mp.erase(s[i]);
                }
                else
                count--;
                i++;
            }
            j++;

        }
        return ans;
    }
    long long countOfSubstrings(string s, int k) {

        int n=s.size();
        ll ans=0;

        // atleast(k)- atleast(k+1) answer bhetel   

        ll val1=f(s,k);
        ll val2=f(s,k+1);

        return val1-val2;    

        
        
    }
};
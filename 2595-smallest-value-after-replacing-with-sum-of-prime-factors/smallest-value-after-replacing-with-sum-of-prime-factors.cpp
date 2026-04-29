class Solution {
public:
    int fun(int n)
    {
        int sum=0;
        for(int i=2;i*i<=n;i++)
        {
            while(n%i==0)
            {
                sum+=i;
                n/=i;
            }
        }
        if(n>1)
        sum+=n;
        return sum;
    }
    int smallestValue(int n) {

        unordered_set<int> st;
        while(true)
        {
            int val=fun(n);
            if(st.find(val)!=st.end())
            return val;
            st.insert(val);
            n=val;
        }
        return 0;
        
    }
};
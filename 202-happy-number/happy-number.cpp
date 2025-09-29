class Solution {
public:
    int sod(int n)
    {
        int ans=0;
        while(n)
        {
            int r=n%10;
            n/=10;
            ans+=(r*r);
        }
        return ans;
    }
    bool isHappy(int n) {

        unordered_set<int> st;
        st.insert(n);
        while(1)
        {
            n=sod(n);
            if(n==1)
            return true;
            if(st.contains(n))
            return false;

            st.insert(n);
        }
        return true;
        
    }
};
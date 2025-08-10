class Solution {
public:
    bool reorderedPowerOf2(int n) {

        // store power of 2 in form of string 
        //and then check if following number is there or not after sorting it 
        set<string> st;
        int val=1;
        while(true)
        {
            if(val>1e9)
            break;
            string t=to_string(val);
            sort(t.begin(),t.end());
            st.insert(t);
            val=val<<1;
            
        }

        string s=to_string(n);
        sort(begin(s),end(s));

        if(st.find(s)!=st.end())
        return true;

        return false;
        
    }
};
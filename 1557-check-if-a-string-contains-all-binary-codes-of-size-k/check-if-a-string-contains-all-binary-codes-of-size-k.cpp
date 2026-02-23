class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n=s.size();

        int i=0,j=0;
        unordered_set<string> st;

        while(j<n)
        {
            if(j-i+1==k)
            {
                string t=s.substr(i,k);
                st.insert(t);
                i++;
            }
            j++;
        }        
        return st.size()==(1<<k);
    }
};
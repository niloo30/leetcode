class Solution {
public:
    int minDeletions(string s) {

        int n=s.size();
        vector<int> arr(26,0);
        for(int i=0;i<n;i++)
        arr[s[i]-'a']++;

       

        
        int ans=0;
        set<int> st;

        for(int i=0;i<arr.size();i++)
        {
            int val=arr[i];
            while(arr[i]>0 && st.find(val)!=st.end())
            {
                ans++;
                val--;
            }
            if(val>0)
            st.insert(val);

        }

        return ans;
        
    }
};
class Solution {
public:
    int minDeletions(string s) {

        int n=s.size();
        vector<int> freq(26,0);
        for(int i=0;i<n;i++)
        freq[s[i]-'a']++;

        vector<int> arr;
        for(int i=0;i<26;i++)
        if(freq[i]>0)
        arr.push_back(freq[i]);

        sort(arr.begin(),arr.end());
        int ans=0;
        set<int> st;

        for(int i=0;i<arr.size();i++)
        {
            int val=arr[i];
            while(st.find(val)!=st.end())
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
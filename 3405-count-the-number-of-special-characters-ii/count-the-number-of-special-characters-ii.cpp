class Solution {
public:
    int numberOfSpecialChars(string word) {

        int n=word.size();

        vector<int> small(26,-1);
        vector<int> cap(26,-1);

        for(int i=0;i<n;i++)
        {
            char ch=word[i];
            if(islower(ch))
            {
                small[ch-'a']=i;
            }
            else
            {
                if(cap[ch-'A']==-1)
                {
                    cap[ch-'A']=i;
                }
            }
        }
        
        int ans=0;  

        for(int i=0;i<26;i++)
        {
            if(small[i]!=-1 and cap[i]!=-1)
            {
                if(small[i]<cap[i])
                ans++;
            }
        }

        return ans;
    }
};
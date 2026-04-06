class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n=words.size();
        int ans=0;
        set<char> s;

        for(int i=0;i<allowed.size();i++)
        s.insert(allowed[i]);

        for(int i=0;i<n;i++){
            string t=words[i];
            bool flag=true;
            for(int i=0;i<t.size();i++)
            {
                if(s.find(t[i])==s.end())
                {
                    flag=false;
                }

            }
            if(flag==true)
            ans++;
        }
        return ans;
        
    }
};
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {


        vector<int> ans;
        int n=words.size();

        for(int i=0;i<n;i++)
        {
            string s=words[i];
            bool flag=false;

            for(int i=0;i<s.size();i++)
            {
                if(s[i]==x)
                {
                    flag=true;
                    break;
                }
            }

            if(flag)
            ans.push_back(i);
        }

        return ans;


        
    }
};
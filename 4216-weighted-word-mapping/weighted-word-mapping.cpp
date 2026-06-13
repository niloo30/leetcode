class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {

        string ans="";
        int n=words.size();

        for(int i=0;i<n;i++)
            {
                string s=words[i];
                int sum=0;
                for(int j=0;j<s.size();j++)
                    {
                        int x=s[j]-'a';
                        sum=(sum+weights[x]);    
                    }
                sum=sum%26;
                char ch='z'-sum;

                ans+=ch;
                
            }


        return ans;
        
    }
};
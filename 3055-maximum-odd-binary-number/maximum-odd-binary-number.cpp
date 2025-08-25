class Solution {
public:
    string maximumOddBinaryNumber(string s) {

        int n=s.size();
        int o=0,z=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            z++;
            else
            o++;
        }

        string ans="";
        ans+='1';
        o--;

        for(int i=0;i<z;i++)
        ans+='0';

        for(int i=0;i<o;i++)
        ans+='1';

        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
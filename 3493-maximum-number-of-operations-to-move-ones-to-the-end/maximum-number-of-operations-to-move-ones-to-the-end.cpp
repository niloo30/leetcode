class Solution {
public:
    int maxOperations(string s) {

        int ans=0;
        int one=0;
        int i=0;
        while(i<s.size())
        {
            if(s[i]=='1')
            {
                one++;
            }
            else
            {
                ans+=one;
                while(s[i]=='0')
                i++;

                i--;
            }
            i++;
        }

        return ans;
        
    }
};
class Solution {
public:
    string maximumOddBinaryNumber(string s) {

        int n=s.size();
        int ones=0;
        for(auto ele:s)
        if(ele=='1')
        ones++;

        s[n-1]='1';
        ones--;

        for(int i=0;i<n-1;i++)
        {
            if(ones>0)
            {
                s[i]='1';
                ones--;
            }
            else
            s[i]='0';
        }
        return s;


        
    }
};
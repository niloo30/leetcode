class Solution {
public:
    string f(string& num1,string& num2,int i,int j)
    {
        string ans="";
        int carry=0;
        while(i>=0 || j>=0)
        {
            int val=carry;
            if(i>=0)
            val+=(num1[i]-'0');

            if(j>=0)
            val+=(num2[j]-'0');


            carry=val/2;
            val=val%2;
            
            ans+=char(val+'0');
            i--;j--;
        }
        if(carry)
        ans+=char(1+'0');
        reverse(ans.begin(),ans.end());
        return ans;
    }
    string addStrings(string num1, string num2) {

        int n=num1.size();
        int m=num2.size();

        string ans=f(num1,num2,n-1,m-1);

        return ans;
        
    }
    int numSteps(string s) {

        int ans=0;
        while(s!="1")
        {
            if(s[s.size()-1]=='0')
            {
                s.pop_back();
            }
            else
            {
                s=addStrings(s,"1");
            }
            ans++;

        }


        return ans;
        
    }
};
class Solution {
public:
    int splitNum(int num) {

        string s=to_string (num);
        sort(s.begin(),s.end());

        int num1=0,num2=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(num1<=num2)
            {
                num1=10*num1+(s[i]-'0');
            }
            else
            num2=10*num2+(s[i]-'0');
        }

        return num1+num2;
        
    }
};
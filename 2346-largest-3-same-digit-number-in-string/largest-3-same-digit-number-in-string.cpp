class Solution {
public:
    string largestGoodInteger(string num) {

    int n=num.size();
    char maxchar=' ';
    int flag=false;
    for(int i=2;i<n;i++)
    {
        if(num[i]==num[i-1] && num[i-1]==num[i-2])
        {
            if(num[i]>maxchar)
            {
                maxchar=num[i];
                flag= true;
            }
        }
    }
    string ans(3,maxchar);
    if(flag== true)
    return ans;

    return "";
        
    }
};
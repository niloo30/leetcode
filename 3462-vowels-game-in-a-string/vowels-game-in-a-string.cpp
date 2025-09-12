class Solution {
public:
    bool isvowel(char ch)
    {
        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    }
    bool doesAliceWin(string s) {
        
        int count=0;
        for(char ch:s)
        {
            if(isvowel(ch))
            count++;
        }
        


        return count>=1;
    }
};
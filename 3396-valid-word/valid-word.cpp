class Solution {
public:
    bool isvowel(char ch)
    {
        if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='U' || ch=='u')
        return true;

        return false;
    }
    bool isconso(char ch)
    {
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        {
            if(!isvowel(ch))
            return true;
        }
        return false;
    }
    bool isValid(string word) {

        int n=word.size();
        if(n<3)
        return false;
        bool vowel=false;
        bool consonant=false;
        for(auto ch: word)
        {
            if((ch>='0' && ch<='9') || ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')))
            {
                if(isvowel(ch))
                {
                    vowel=true;
                }
                if(isconso(ch))
                consonant=true;
                
            }
            else return false;

        }

        return vowel && consonant;
        
    }
};
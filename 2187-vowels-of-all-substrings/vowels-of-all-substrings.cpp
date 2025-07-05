class Solution {
public:
    #define ll long long
    bool isvowel(char ch)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return true;

        return false;
    }
    long long countVowels(string word) {

        int n=word.size();
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            if(isvowel(word[i]))
            ans+=(ll)(i+1)*(n-i);
            
        }
        

        return ans;


        
    }
};
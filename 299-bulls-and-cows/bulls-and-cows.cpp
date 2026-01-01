class Solution {
public:
    string getHint(string secret, string guess) {


        int bulls=0;
        vector<int> secretchar(10);
        vector<int> guesschar(10);
        for(int i=0;i<secret.size();i++)
        {
            if(secret[i]==guess[i])
            bulls++;
            else
            {
                secretchar[secret[i]-'0']++;
                guesschar[guess[i]-'0']++;
            }
        }

        int cows=0;
        for(int i=0;i<10;i++)
        {
            cows+=min(secretchar[i],guesschar[i]);
        }
        
        string ans=to_string(bulls)+"A"+to_string(cows)+"B";
        return ans;



        
    }
};
class Solution {
public:
    string getSmallestString(string s) {

        int n=s.size();
        for(int i=0;i<n-1;i++)
        {
            int curr=s[i]-'0';
            int next=s[i+1]-'0';

            if(curr%2==next%2)
            {
                if(10*curr+next>10*next+curr)
                {
                    swap(s[i],s[i+1]);
                    return s;
                }
                
            }
        }
        return s;
        
    }
};
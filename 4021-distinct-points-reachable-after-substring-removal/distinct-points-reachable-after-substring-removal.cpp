class Solution {
public:
    int distinctPoints(string s, int k) {

        int n=s.size();
        int X=0,Y=0;
        set<pair<int,int>> ans;
        for(int i=0;i<n;i++)
            {
                if(s[i]=='U')
                    Y++;
                else if(s[i]=='D')
                    Y--;
                else
                    if(s[i]=='R')
                        X++;
                else
                        X--;
            }
        //i got the final cordinated 
        // no of subsdtring i can remove n-k+1;
        // winf=dow of size k remove put into set and het number of unique points
        int i=0,j=0;
        int tx=0,ty=0;
        while(j<n)
        {
            if(s[j]=='U')
                    ty++;
                else if(s[j]=='D')
                    ty--;
                else
                    if(s[j]=='R')
                        tx++;
                else
                        tx--;
                
                if(j-i+1==k) // this portion needs to be removed 
                {

                    ans.insert({X-tx,Y-ty});
                    //slide the window
                    if(s[i]=='U')
                    ty--;
                else if(s[i]=='D')
                    ty++;
                else
                    if(s[i]=='R')
                        tx--;
                else
                        tx++;
                    
                    i++;

                }
                j++;

        }

        return ans.size();
        
        
    }
};
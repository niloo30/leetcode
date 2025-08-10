class Solution {
public:
    bool winnerOfGame(string arr) {

        int n=arr.size();
        int a=0,b=0;
        int alice=0,bob=0;

        for(int i=0;i<n;i++)
        {
            if(arr[i]=='A')
            {
                if(b>=3)
                {
                    bob+=(b-2);
                }
                b=0;
                a++;

            }
            else // arr[i]=='B
            {
                if(a>=3)
                {
                    alice+=(a-2);
                }
                a=0;
                b++;
            }
        }

        if(a==0)
        {
            if(b>=3)
            bob+=(b-2);
        }
        if(b==0)
        {
            if(a>=3)
            alice+=(a-2);
        }

        return alice>bob;
        
    }
};
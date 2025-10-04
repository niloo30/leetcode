class Solution {
public:
    int minMoves(int target, int maxDoubles) {

        int ans=0;
        while(target!=1)
        {
            if(maxDoubles==0)
            {
                ans+=(target-1);
                break;
            }
            if((target&1))
            {
                target--;
            }
            else
            {
                target=target>>1;
                maxDoubles--;
            }
            
            ans++;
        }
        return ans;
        
    }
};
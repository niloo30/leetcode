class Solution {
public:
    bool isPowerOfTwo(int n) {

        int ans=0;
        while(n>0)
        {
            ans++;
            n= n&(n-1);
        }
        return ans==1;
        
    }
};
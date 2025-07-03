class Solution {
public:
    char kthCharacter(int k) {

        k--;
        int bits=0;
        while(k>0)
        {
            bits++;
            k=(k&(k-1));
        }

        return char('a'+bits);
        
    }
};
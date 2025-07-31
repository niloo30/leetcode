class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {

        int count=0;
        while(left!=right && right>0 && left>0)
        {
            count++;
            
            left=left>>1;
            right=right>>1;
        }
        if((!left) || (!right))
        return 0;
        int ans=right<<count;
        return ans;
        
    }
};
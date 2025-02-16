class Solution {
public:
    int getSum(int a, int b) {

        int ans= (a|b)+(a&b);

        return ans;
        
    }
};
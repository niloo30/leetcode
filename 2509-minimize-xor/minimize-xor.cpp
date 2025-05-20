class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int set = __builtin_popcount(num2);
        int ans = 0;

        for (int i = 31; i >= 0; i--) {
            if (((1 << i) & num1) && set > 0) {
                ans |= (1 << i);
                set--;
            }
        }

        for (int i = 0; i <= 31 && set > 0; i++) {
            if (((1 << i) & ans) == 0) {
                ans |= (1 << i);
                set--;
            }
        }

        return ans;
    }
};

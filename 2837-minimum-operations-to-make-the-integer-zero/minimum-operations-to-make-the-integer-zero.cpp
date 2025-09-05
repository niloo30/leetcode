class Solution {
public:
    #define ll long long
    int makeTheIntegerZero(int num1, int num2) {

        int i=1;

        while(1)
        {
            ll val= (ll)num1-(ll)i*(num2);

            if(val<0)
            return -1;

            ll bits=__builtin_popcountll(val);
            if(bits<= i && i<=val)
            return i;


            i++;
        }
        return 0;
        
    }
};
class Solution {
public:
    #define ll long long
    int mySqrt(int x) {

        // why r we using binary search since the function is monotonic in nature 
        // we can always use binary search

        int l=0;
        int h=x;

        while(l<=h)
        {
            ll mid=(l+h)/2;

            if(mid*mid==x)
            return mid;
            else 
            if(mid*mid>x)
            h=mid-1;
            else
            l=mid+1;
        }
        return h;
        
    }
};
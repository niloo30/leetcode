class Solution {
public:
    bool check(int i,int j)
    {
        while(i>0)
        {
            if(i%10==0)
            return false;

            i=i/10;
        }

        while(j>0)
        {
            if(j%10==0)
            return false;

            j=j/10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {

        for(int i=1;i<n;i++)
        {
            if(check(i,n-i))
            return {i,n-i};
        }
        return {};
        
    }
};
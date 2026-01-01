class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n=digits.size();
        int i=n-1;
        for(i;i>=0;i--)
        {
            if(digits[i]<9)
            {
                digits[i]++;
                return digits;
            }
            else
            digits[i]=0;
        }
        if(i==-1)
        digits.push_back(0);
        digits[0]=1;

        return digits;
        
    }
};
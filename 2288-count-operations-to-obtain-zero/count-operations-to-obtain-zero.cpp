class Solution {
public:
    int countOperations(int num1, int num2) {
        int ans=0;

        if(num2>num1)
        swap(num1,num2);
        while(num1>0 and num2>0)
        {
            ans+=(num1/num2);
            num1=num1%num2;

            swap(num1,num2);
        }
        return ans;
        
    }
};
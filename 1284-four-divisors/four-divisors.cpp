class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {

        int ans=0;

        for(auto ele:nums){

            int divs=0;
            int div_sum=0;
            for(int i=1;i*i<=ele;i++)
            {
                if(ele%i==0)
                {
                    int div1=i;
                    int div2=ele/i;

                    div_sum+=div1;
                    if(div1!=div2)
                    {
                        divs+=2;
                        div_sum+=div2;

                    }
                    
                    else
                    divs++;
                }
            }
            if(divs==4)
            ans+=div_sum;
        }

        return ans;
    }
};